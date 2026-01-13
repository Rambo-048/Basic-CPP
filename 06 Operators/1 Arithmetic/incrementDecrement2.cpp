#include <iostream>

using namespace std;

int main()
{
	int a = 5;
	int b = 5;

	// Postincrement
	cout << a << endl;             // a -> 5
	cout << a++ << endl;           // postincrement --> (a = 5) --> (a + 1)
	cout << a << endl << endl;     // a -> 6

	// preincrement
	cout << b << endl;             // b -> 5
	cout << ++b << endl;           // preincrement  --> (b + 1 = 6)
	cout << b << endl << endl;     // b -> 6
	
	// Postdecrement
	cout << a << endl;             // a -> 6
	cout << a-- << endl;           // postdecrement --> (a = 6) --> (a - 1)
	cout << a << endl << endl;     // a -> 5

	// predecrement
	cout << b << endl;             // b -> 6
	cout << --b << endl;           // predecrement  --> (b - 1 = 5)
	cout << b << endl << endl;     // b -> 5

	cin.get();
	return 0;
}
