#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a; //amount, how much money did we make?
    float p=10000; //principle amount
    float r = 0.01; //1% interest rate

    for(int day=1; a<=20000; day++) {
           a = p * pow(1+r, day);
           cout << "Day " << day << "\t - \t" << a << "\n";
    }

}
