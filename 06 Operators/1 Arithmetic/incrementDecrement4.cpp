#include <iostream>

using namespace std;

int main()
{
	int a = 10;
	int b = 10;

	// Postincrement
	cout << a << endl;             // a -> 10
	cout << a++ << endl;           // postincrement --> (a = 10) --> (a + 1)
	cout << a << endl << endl;     // a -> 11

	// preincrement
	cout << b << endl;             // b -> 10
	cout << ++b << endl;           // preincrement  --> (b + 1 = 11)
	cout << b << endl << endl;     // b -> 11
	
	// Postdecrement
	cout << a << endl;             // a -> 11
	cout << a-- << endl;           // postdecrement --> (a = 11) --> (a - 1)
	cout << a << endl << endl;     // a -> 10

	// predecrement
	cout << b << endl;             // b -> 11
	cout << --b << endl;           // predecrement  --> (b - 1 = 10)
	cout << b << endl << endl;     // b -> 10

	cin.get();
	return 0;
}

