
#include <iostream>
using namespace std;
int main() {
    int var = 35;

    // declare pointer variable
    int* valPtr;

    // store address of var
    valPtr = &var;

    // print value of var
    cout << "var = " << var << endl;

    // print address of var
    cout << "Address of var (&var) = " << &var << endl
         << endl;

    // print pointer valPtr
    cout << "valPtr = " << valPtr << endl;

    // print the content of the address valPtr points to
    cout << "Content of the address pointed to by valPtr (*valPtr) = " << *valPtr << endl;
    
    return 0;
}

