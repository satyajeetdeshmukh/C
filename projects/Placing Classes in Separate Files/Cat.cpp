#include "Cat.h"
#include <iostream>

using namespace std;
Cat::Cat()
{
    cout << "meow" << endl;
}

Cat::getage(int arg)
{
    age  =  arg;
    cout << "Age has been set as " << age << endl;
}
