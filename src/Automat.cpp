/**
    This class describes the automate LR(0). It provides methods for
    static analysis and lexical analysis
*/

#include "Automat.h"

// TO-DO still needed?
static const int MAX = 200;

/**
    Constructor of the automate
*/
Automat::Automat(LexicalAnalyzer *aL)
{
    this->aLexical = aL;
    this->newIdentifier = true;
}

Automat::~Automat()
{
    //dtor
}

/**
    Returns the representation of the program
*/
Program Automat::getProgram() {
    return this->program;
}

/**
    Checks whether the identifier that is passed has just been added
    or if it is a double declaration
*/
bool Automat::isDoubleDeclaration(string identifier)
{
     if (this->identifiers.find(identifier) != identifiers.end())
     {
         return true;
     }
     return false;
}

/**
    Wheter or not a new identifier has just been added
*/
bool Automat::isNewIdentifier()
{
    return this->newIdentifier;
}

Symbol *Automat::getLastSymbol()
{
    Symbol *s = this->symbols.top();
    this->symbols.pop();
    return s;
}

void Automat::pushState(State *state)
{
    this->states.push(state);
}

void Automat::consume()
{
    this->aLexical->shift();
}

void Automat::popSymbol()
{
    this->symbols.pop();
}

void Automat::add(Instruction* instr)
{
    this->program.add(instr);
}

void Automat::add(Declaration* dec)
{
    this->program.add(dec);
}

void Automat::execute()
{
    this->program.execute();
}

/**
    Reduces a certain number of states and continues with the symbol
    passed as attribute
*/
bool Automat::reduce(int nbStates, Symbol *symbol)
{
    for (int i = 0; i < nbStates ; i++){
        this->states.pop();
    }
// TO-DO still needed?
    //symbols.push(s);
    this->states.top()->transition(*this, symbol);
    return false;
}

/**
    The shift pushes the symbol and state on the corresponding stack 
*/
bool Automat::shift(Symbol *symbol, State *state){

    this->states.push(state);
    this->symbols.push(symbol);
    return false;
}

/**
    Performs lexical analysis of the program
*/
void Automat::lexicalAnalysis()
{

    this->states.push(new State0);
    bool accepted = false;
    do
    {
        //states.top()->print();
        Symbol *next = this->aLexical->getCurrentSymbol();
        //next->printType();
        //cout << endl;
        //if the next symbol is an id, we have to make sure it has not been created before
        if(next->getType() == ID)
        {
            Identifier * id  = (Identifier*) next;
            if(this->identifiers.find(id->getName()) != this->identifiers.end())
            {
                //TODO delete next?

                //use existing id if it exists
                next = this->identifiers.at(id->getName()).id;
                //reset id role (could have been used as T or F before)
                // TO-DO: can it still? new Identifier is created in States1toN
                next->setType(ID);
                this->newIdentifier = false;
            }
            else
            {
                //insert new id
                this->identifiers.insert(make_pair(id->getName(),idProperties(id)));
                this->newIdentifier = true;
            }
        }
        try
        {
            accepted = this->states.top()->transition(*this, next);
        }
        catch(std::logic_error ex)
        {
            throw ex;
        }
     } while(!accepted);
}

/**
    Performs static analysis of the program
*/
void Automat::staticAnalysis()
{
    vector<Declaration*> declarations = this->program.getDeclarations();

    for (auto itDeclarations = declarations.begin() ; itDeclarations != declarations.end(); ++itDeclarations)
    {
        switch((*itDeclarations)->getType())
        {
            case LC:
                {
                    vector<Identifier *> constants = ((DecConstant*)(*itDeclarations))->getConstants();
                    for (auto itConstants = constants.begin(); itConstants != constants.end(); ++itConstants)
                    {
                        if ( !(this->identifiers.find((*itConstants)->getName()) != this->identifiers.end()) )
                        {
                            cout << (*itConstants)->getName() << " has not been found while doing lexical analysis" << endl;
                        }
                        else
                        {
                            this->identifiers.at((*itConstants)->getName()).isDeclared = true;
                            this->identifiers.at((*itConstants)->getName()).isConstant = true;
                            this->identifiers.at((*itConstants)->getName()).initialized = true;
                        }
                    }
                }
                break;
            case LV:
                {
                    vector<Identifier *> variables = ((DecConstant*)(*itDeclarations))->getConstants();
                    for (auto itVariables = variables.begin(); itVariables != variables.end(); ++itVariables)
                    {
                        if ( !(this->identifiers.find((*itVariables)->getName()) != this->identifiers.end()) )
                        {
                            cout << (*itVariables)->getName() << " has not been found while doing lexical analysis" << endl;
                        }
                        else
                        {
                            this->identifiers.at((*itVariables)->getName()).isDeclared = true;
                        }
                    }
                }
                break;
            // should never be the case when no fault in grammar
            default:
                cout << "Error: Declaration was a : ";
                (*itDeclarations)->printType();
                cout << endl;
        }
    }

    vector<Instruction*> instructions = this->program.getInstructions();

    for (auto it = instructions.begin() ; it != instructions.end(); ++it)
    {
        switch((*it)->getInstType())
        {
            case AFF:
                {
                    InstructionAffectation * instrAff = (InstructionAffectation*) *it;
                    Identifier* id = instrAff->getIdentifier();
                    this->identifiers.at(id->getName()).initialized = true;
                    checkIdent(id, false);
                    Expression* expr = instrAff->getExpression();
                    checkExpression(expr);
                }
                break;
            case LEC:
                {
                    InstructionLecture * instrLec = (InstructionLecture*) *it;
                    Identifier* id = instrLec->getIdentifier();
                    checkIdent(id, false);
                }
                break;
            case ECR:
                {
                    InstructionEcriture * instrEcr = (InstructionEcriture*) *it;
                    Expression* expr = instrEcr->getExpression();
                    checkExpression(expr);
                }
                break;
        }
    }
    
    for (auto itIdentifiers = this->identifiers.begin(); itIdentifiers != this->identifiers.end(); ++itIdentifiers)
    {
        if (itIdentifiers->second.isDeclared && !itIdentifiers->second.used)
        {
            cout << "Identifier " << itIdentifiers->first << " is never used" << endl;
        }
    }
}

void Automat::checkIdent(Identifier * id, bool isExpression)
{
    if (id->getExpressionType() != IDENT)
    {
        cout << "Expression type of identifier to use is ";
        id->printExpressionType();
        cout << endl;
    }
    else
    {
        // should never be the case when no fault in grammar
// TO-DO not sure yet if we need this
/*        if (id->getType() != ID)
        {
            cout << "ERROR: Symbol type of identifier to use is " << id->afficherType() << endl;
        }*/
        
        if (this->identifiers.find(id->getName()) == this->identifiers.end() || !this->identifiers.at(id->getName()).isDeclared)
        {
                     cout << "Identifier " << id->getName() << " has not been declared" << endl;
        }
        else
        {
            if (!isExpression && this->identifiers.at(id->getName()).isConstant)
            {
               
                cout << "Attempt to modify constant " << id->getName() << endl;
            }
            else if (isExpression && (this->identifiers.find(id->getName()) == this->identifiers.end() || !this->identifiers.at(id->getName()).initialized))
            {
                
                cout << "Variable " << id->getName() << " has not been initialized" << endl;
                this->identifiers.at(id->getName()).used = true;
            }
            else
            {
                this->identifiers.at(id->getName()).used = true;
            }
        }
    }
}

void Automat::checkExpression(Expression * expr)
{
    if (expr->getExpressionType() == IDENT)
    {
        checkIdent((Identifier*) expr, true);
    }
    else if (expr->getExpressionType() == PAR)
    {
        checkExpression(((ExprPar*)expr)->getExpression());
    }
    else if (expr->getExpressionType() == BIN)
    {
        checkExpression(((ExprBinaire*)expr)->getLeft());
        checkExpression(((ExprBinaire*)expr)->getRight());
    }
}
