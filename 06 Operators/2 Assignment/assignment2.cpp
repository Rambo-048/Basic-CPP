#include <iostream>

using namespace std;

int main()
{

	// Assignment
	int a = 10;

	cout << "Insert Value : " << a << endl;


	a += 5;
	cout << "Value 1 : " << a << endl;

	a -= 4;
	cout << "Value 2 : " << a << endl;

	a *= 3;
	cout << "Value 3 : " << a << endl;

	a /= 2;
	cout << "Value 4 : " << a << endl;

	a %= 1;
	cout << "Value 5 : " << a << endl;

	cin.get();
	return 0;
}
