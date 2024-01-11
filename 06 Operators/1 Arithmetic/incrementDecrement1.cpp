// Contoh 1

#include <iostream>

using namespace std;

int main()
{
	int a = 5;
	int b = 5;

	// Increment (+) dan Decrement (-) : 
	
	// 1. Postdecrement (after count)
	// 2. Postincrement (before count)
	// 3. Preincrement  (after count)
	// 4. Predecrement  (before count)

	// Postincrement (a++ -----> a = a + 1)
	cout << a << endl;
	a++; 
	cout << a << endl << endl;

	// Preincrement (++b -----> b + 1 = a)
	cout << b << endl;
	++b;
	cout << b << endl << endl;	

	// Postdecrement (a-- -----> a = a - 1)
	cout << a << endl;
	a--; 
	cout << a << endl << endl;

	// Predecrement (--b -----> b - 1 = b)
	cout << b << endl;
	--b;
	cout << b << endl;

	cin.get();
	return 0;
}
