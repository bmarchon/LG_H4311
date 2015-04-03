#include "State.h"
#include <iostream>
using namespace std;

State::State(int num)
{
    this->num = num;
}

void State::print() const
{
    cout << num << endl;
}
