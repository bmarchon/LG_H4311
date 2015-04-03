#ifndef STATE_H
#define STATE_H

#include <string>
#include "Symbol.h"
using namespace std;

class Automat;

class State
{
	public:
	    // TO-DO: really needed?
        State() {}
        State(int num);
		virtual ~State() {}
		// TO-DO string representation for all states (why const??)
		void print() const;
		virtual bool transition(Automat & automate, Symbol * s) = 0;
	protected:
        int num;
	private:
};

#endif // STATE_H
