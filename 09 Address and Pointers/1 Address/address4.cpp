// Printing Variable Address

#include <iostream>
using namespace std;

int main()
{
    // declare variables
    int var1 = 8;
    int var2 = 30;
    int var3 = 35;
    int var4 = 50;

    // print address of var1
    cout << "Address of var1: "<< &var1 << endl;

    // print address of var2
    cout << "Address of var2: " << &var2 << endl;

    // print address of var3
    cout << "Address of var3: " << &var3 << endl;
    
    // print address of var4
    cout << "Address of var4: " << &var4 << endl;
}
