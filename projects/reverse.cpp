#include <iostream>
#include <math.h>
using namespace std;

int rev(int a, int i) {
    int rev=0;
    while(i--) {
        rev += (a%10)*pow(10,i);
        a/=10;
    }
    cout << rev;
}

int main() {
    rev(693);
    return 0;
}
