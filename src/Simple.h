#ifndef SIMPLE_H
#define SIMPLE_H

typedef enum {A, M} Simples;
static const string simpleTypes[] = { "ADD", "MULT" };

class Simple : public Symbol
{
    public:
        Simple();
        Simple(Simples type, Symbols type);
        virtual ~Simple();
        char getSimple();
        void setSimple(char simple);
        virtual void print() = 0; // Display the value for the representation
        void printType();
        Simples getSimpleType();
    protected:
        Simples type;
        char simple;
    private:
};

#endif // SIMPLE_H
