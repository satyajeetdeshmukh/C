#include <iostream>
#include "student.h"
using namespace std;

int main()
{
    student normal;
    normal.printshit();
    normal.printshit2();
    const student rohan;
    //rohan.printshit();
    rohan.printshit2();

}
