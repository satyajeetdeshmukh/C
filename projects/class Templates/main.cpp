#include <iostream>

using namespace std;

template <class T> //generic data type
class Dog{
    T t1, t2;
public:
    Dog(){};
    Dog(T a, T b) {
        t1=a;
        t2=b;
    }
    T bigger(); //declaration
    T smaller();
};

template <class T> //before every single function outside the class
T Dog<T>::bigger(){
    return(t1>t2?t1:t2);
}

template <class T>
T Dog<T>::smaller(){
    return(t1<t2?t1:t2);
}

int main()
{
    Dog <double> bubbles(45, 53.669);
    cout << bubbles.bigger() << endl << bubbles.smaller();
}
