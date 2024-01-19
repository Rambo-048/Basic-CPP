#include <iostream>

using namespace std;

int main()
{
	// Variabel
	int a = 5;

	cout << "Address a : " << &a << endl;
	cout << "Value a   : " << a << endl << endl;


	// Reference
	int &b = a;
	cout << "Value b   : " << b << endl;
	cout << "Address b : " << &b << endl << endl;
	

	b = 10;
	cout << "Value a   : " << a << endl;
	cout << "Value b   : " << b << endl << endl;


	a = 20;
	cout << "Value a   : " << a << endl;
	cout << "Value b   : " << b << endl;


	cin.get();
	return 0;
}
