#include "student.h"
#include <iostream>

using namespace std;
student::student()
{
    cout << "Constructed!!" << endl;
}

student::~student()
{
    cout << "AAHHH" << endl;
}

void student::printshit() {
    cout << "Tatti!!"<< endl;
}

void student::printshit2() const {
    cout << "Shit!!"<< endl;
}
