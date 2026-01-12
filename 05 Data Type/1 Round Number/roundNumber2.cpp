#include <iostream>
#include <bits/stdc++.h> // Standar Library - Numeric Limits

using namespace std;

int main() {
	// Fundamental Data Type :

	// Round Number
	// 32 bit 
	int a = 10;           // (signed)
	unsigned int a = 10;  // unsigned

	// 64 bit
	long b = 15; 
	short c = 25;

	cout << c << endl;
	cout << sizeof(c) << " byte" << endl;
	cout << numeric_limits<int>::max() << endl;
	cout << numeric_limits<int>::min() << endl;
	cin.get();
	return 0;
}
