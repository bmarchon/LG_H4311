#include "Automate.h"
#include <string.h>

Automate::Automate()
{
	//ctor
	struct analyseSymbole test(new SymboleSimple(VAR));
	tableauAnalyseStatique.push_back(test);  
}

void Automate::testTableauanalyseeeeee(){
	cout << tableauAnalyseStatique[0].s->afficherType() << "coucou" << endl;
}


bool Automate::reduction(int nbEtat, Symbole *s)
{
	stack<Symbole *> cache = symboles;
	switch(etats.top()->getNombreEtat())
    {
        case 2:
			cache.pop();
			while(cache.top()->getType() != VAR) {
				if (cache.top()->getType() == ID)
				{
					tableauAnalyseStatique.push_back(analyseSymbole(cache.top()));
					cache.pop(); //is fucking void!
				}
			}
			break;
        case 3:
			break;
        case 9:
			break;
        case 10:
			break;
        case 11:
			break;

    }
    return false;
	
    for(int i = 1; i<nbEtat; i++){
        etats.pop();
    }
    //etats.top()->transition(this, s);
    return true;

}

bool Automate::decalage(Symbole *s, Etat *etat){

    etats.push(etat);
    symboles.push(s);
    return true;
}


bool Automate::analyse(){
    return true;
}

 AnalyseurLexical * Automate::getAnalyseurLexical()
 {
	return aLexical;
 }

Automate::~Automate()
{
	//dtor
}
