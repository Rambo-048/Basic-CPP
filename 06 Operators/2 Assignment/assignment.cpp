#include <iostream>

using namespace std;

int main()
{
	int a = 5;
	int b = 2;

	// Operator Assignment : =, +=, -=, *=, /=, %=, &=, |=, ^=, >>=, <<=
	// 1. (+=)
	a += 5;
	b += 2;
	cout << a << endl;
	cout << b << endl;

	// 2. (-=)
	a -= 2;
	b -= 5;
	cout << a << endl;
	cout << b << endl;

	// 3. (*=)
	b *= 5;
	a *= 2;
	cout << a << endl;
	cout << b << endl;

	// 4. (/=)
	b /= 5;
	a /= 2;
	cout << a << endl;
	cout << b << endl;

	// 5. (%=)
	b %= 5;
	a %= 2;
	cout << a << endl;
	cout << b << endl;


	cin.get();
	return 0;
}
