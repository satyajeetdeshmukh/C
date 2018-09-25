#include<iostream>
#include<fstream>
#include<string>
#include<stdlib.h>

using namespace std;

int main() {

    ofstream outFile;
    outFile.open("sample.txt");
    outFile << "Hello World!";
    outFile.close();

    ifstream inFile;
    inFile.open("sample.txt");
    char s[30];
    while (!inFile.eof()) {
        inFile.getline(s,30);
        cout << s << endl;
    }
    inFile.close();

    return 0;
}
