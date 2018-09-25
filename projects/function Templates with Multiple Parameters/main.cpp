#include <iostream>
using namespace std;

template <class A, class B>
A smaller(A a, B b) {
    return (a<b?a:b); //if a is less than b, return a else return b
}

int main() {
    int x = 100;
    double y = 69.69;
    cout << smaller(y,x) << endl;
}
