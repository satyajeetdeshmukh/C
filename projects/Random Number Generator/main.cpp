#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand (time(0));
    int sum = rand()%6 + rand()%6 + 2;
    if (sum >= 7) cout << "u";
    else cout << "d";
}
