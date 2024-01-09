#include <iostream>

using namespace std;

int main() {

	// Round Number
	int a = 1;           
	int b = 2;           
	int total;


	// Operator Arithmetic +, -, *, /, %

	// 1. Addition
	total = a + b;
	cout << a << "+" << b << "=" << total << endl;

	// 2. Minus
	total = a - b;
	cout << a << "-" << b << "=" << total << endl;

	// 3. Times
	total = a * b;
	cout << a << "x" << b << "=" << total << endl;

	// 4. Divided
	total = a / b;
	cout << a << "/" << b << "=" << total << endl;

	// 5. Modulus
	total = a % b;
	cout << a << "%" << b << "=" << total << endl;

	// 6. Mix Operator
	// 1.
	total = a + b * c;    
	cout << a << "+" << b << "*" << c << "=" << total << endl;
	     
	// 2.
	total = (a + b) * c; 
	cout << a << "+" << b << "*" << c << "=" << total << endl;

	cin.get();
	return 0;
}
