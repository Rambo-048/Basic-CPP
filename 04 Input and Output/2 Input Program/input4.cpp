#include <iostream>

using namespace std; 

int main(){

	// Create Input
	int a;
	int b;
	int c;
	int d;

	cout << "Insert Value 1: ";
	cin >> a;
	cout << "Insert Value 2: ";
	cin >> b;
	cout << "Insert Value 3: ";
	cin >> c;
	cout << "Insert Value 4: ";
	cin >> d;

	cout << "Value 1 : ";
	cout << a << endl;
	cout << "Value 2 : ";
	cout << b << endl;
	cout << "Value 3 : ";
	cout << c << endl;
	cout << "Value 4 : ";
	cout << d << endl;
	
	cout << "Value 1 + Value 2 / Value 3 - Value 4 : ";
	cout << (a + b) / (c - d) << endl;

	cin.get();
	return 0;
}
