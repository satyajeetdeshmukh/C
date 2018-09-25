#include "Dog.h"
#include <iostream>

using namespace std;
Dog::Dog(int x)
: h(x)
{
    //ctor
}

void Dog::printcrap(){
    cout << "h = " <<h << endl;
    cout << "this->h = " << this->h<< endl; //this is current object pointer i.e. german here
    cout << "(*this).h = " << (*this).h  << endl;
}
