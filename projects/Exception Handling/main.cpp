#include <iostream>

using namespace std;

int main()
{
    try { //code that we think error might occur
        int momage;
        int sonage;
        cout << "Enter mom's age then son's age: \n";
        cin >> momage >> sonage;
        if (sonage > momage) {
            throw 99;
        }
        if (momage < 0 || sonage < 0) {
            throw 123;
        }
        cout << "Age gap between son and mom is " <<momage-sonage << "\n";
    }
    catch(int x) {
        if (x==99) cout << "Son cannot be older than mom! ERROR " << x << "\n";
        if (x==123) cout << "Invalid negative entries! ERROR "<< x << "\n";
    }
}
