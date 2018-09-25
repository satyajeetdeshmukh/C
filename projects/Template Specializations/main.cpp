#include <iostream>

using namespace std;

template <class T>
class Mint{
public:
    Mint(){}
    Mint(T x){
        cout << x << " is not a character!" << endl;
    }
};

template<> //tells c++ that we are using template specializations
class Mint<char> { // this class is going to specialize in char
public:
    Mint(){}
    Mint(char x) {
        cout << x << " is indeed a character!" << endl;
    }
};

int main()
{
    Mint <double> obj1(2.54);
    Mint <char> obj2('c');
    return 0;
}

