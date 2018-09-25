#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream outfile ("citizens.txt");

    cout << "Enter citizen no, name and money\nPress Ctrl+Z to finish.\n"; //Ctrl+Z is a end of file character

    int no;
    char name[30];
    double money;

    while (cin >> no >> name >> money) {
        outfile << no << "\t" << name << "\t" << money << endl;
    }

    outfile.close();
    return 0;
}
