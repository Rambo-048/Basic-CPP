
#include <iostream>
using namespace std;
int main() {
    int var = 40;
    int* valPtr;

    // store address of var
    valPtr = &var;

    // print var
    cout << "var = " << var << endl;

    // print *valPtr
    cout << "*valPtr = " << *valPtr << endl
         << endl;

    cout << "Changing value of var to 45:" << endl;

    // change value of var to 45
    var = 45;

    // print var
    cout << "var = " << var << endl;

    // print *valPtr
    cout << "*valPtr = " << *valPtr << endl
         << endl;

    cout << "Changing value of *valPtr to 50:" << endl;

    // change value of var to 50
    *valPtr = 50;

    // print var
    cout << "var = " << var << endl;

    // print *valPtr
    cout << "*valPtr = " << *valPtr << endl;
    return 0;
}

