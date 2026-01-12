#include <iostream>
#include <bits/stdc++.h> // Standar Library - Numeric Limits

using namespace std;

int main() {
	// Fundamental Data Type :

	// Decimal Number
	float a = 5.0;
	double b = 7.5;
	float c = 9.0;
	double d = 8.5;

	cout << a << endl;
	cout << sizeof(a) << " byte" << endl;
	cout << numeric_limits<int>::max() << endl;
	cout << numeric_limits<int>::min() << endl;
	cin.get();
	return 0;
}
