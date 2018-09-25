#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int zero(int n) {
    int zero = 0;
    for(int i=1; i<100; i++) {
        zero += floor(n/pow(5,i));
    }
    cout << zero;
}

int main() {
    zero(999999999);
    return 0;
}
