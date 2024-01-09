#include <iostream>
#include <bits/stdc++.h> // Standar Library - Numeric Limits

using namespace std;

int main() {
	// Fundamental Data Type :

	// Decimal Number
	float a = 1.0;
	double b = 2.5;

	cout << a << endl;
	cout << sizeof(a) << " byte" << endl;
	cout << numeric_limits<int>::max() << endl;
	cout << numeric_limits<int>::min() << endl;
	cin.get();
	return 0;
}