#include <iostream>

using namespace std;

int main()
{

	// Assignment
	int a = 20;

	cout << "Insert Value : " << a << endl;


	a += 10;
	cout << "Value 1 : " << a << endl;

	a -= 8;
	cout << "Value 2 : " << a << endl;

	a *= 6;
	cout << "Value 3 : " << a << endl;

	a /= 4;
	cout << "Value 4 : " << a << endl;

	a %= 2;
	cout << "Value 5 : " << a << endl;

	cin.get();
	return 0;
}
