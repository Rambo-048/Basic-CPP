#include <iostream>
using namespace std;
int main() {
    int var = 5;
    int* valPtr;

    // store address of var
    valPtr = &var;

    // print var
    cout << "var = " << var << endl;

    // print *valPtr
    cout << "*valPtr = " << *valPtr << endl
         << endl;

    cout << "Changing value of var to 10:" << endl;

    // change value of var to 10
    var = 10;

    // print var
    cout << "var = " << var << endl;

    // print *valPtr
    cout << "*valPtr = " << *valPtr << endl
         << endl;

    cout << "Changing value of *valPtr to 15:" << endl;

    // change value of var to 15
    *valPtr = 15;

    // print var
    cout << "var = " << var << endl;

    // print *valPtr
    cout << "*valPtr = " << *valPtr << endl;
    return 0;
}