#include <iostream>

using namespace std;

template <class satya> //generic type of data
satya add(satya a, satya b){ //template func
    return a+b;
}


int main()
{
    int x=7, y=43;
    cout << add(x,y) << endl;
    double d=413.515, f=65.464;
    cout << add(d,f) << endl;
    return 0;
}
