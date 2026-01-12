#include <iostream>

using namespace std; 

int main(){

	// Create Input
	int a;
	int b;
	int c;

	cout << "Insert Value 1: ";
	cin >> a;
	cout << "Insert Value 2: ";
	cin >> b;
	cout << "Insert Value 3: ";
	cin >> c;

	cout << "Value 1 : ";
	cout << a << endl;
	cout << "Value 2 : ";
	cout << b << endl;
	cout << "Value 3 : ";
	cout << c << endl;

	cout << "Value 1 + Value 2 + Value 3 : ";
	cout << a + b + c << endl;

	cin.get();
	return 0;
}
