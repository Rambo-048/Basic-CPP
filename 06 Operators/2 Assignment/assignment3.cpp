#include <iostream>

using namespace std;

int main()
{
	int a = 10;
	int b = 4;

	// Operator Assignment : =, +=, -=, *=, /=, %=, &=, |=, ^=, >>=, <<=
	// 1. (+=)
	a += 10;
	b += 4;
	cout << a << endl;
	cout << b << endl;

	// 2. (-=)
	a -= 10;
	b -= 4;
	cout << a << endl;
	cout << b << endl;

	// 3. (*=)
	b *= 10;
	a *= 4;
	cout << a << endl;
	cout << b << endl;

	// 4. (/=)
	b /= 10;
	a /= 4;
	cout << a << endl;
	cout << b << endl;

	// 5. (%=)
	b %= 10;
	a %= 4;
	cout << a << endl;
	cout << b << endl;


	cin.get();
	return 0;
}

