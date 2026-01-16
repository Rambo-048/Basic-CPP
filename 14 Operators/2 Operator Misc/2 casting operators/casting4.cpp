#include <iostream>

using namespace std;

int main(){

	int a = 50;
	float b = 20.67f;
	char c = 'd';

	cout << "Different Syntax Same Function - divided" << endl;
	cout << (float)a / b << endl;


	cout << "\nDifferent Syntax Same Function - multiply" << endl;
	cout << a * (int)b << endl;

	cout << "\nTotal a * c" << endl;
	cout << "Value c " << (int)c << endl;
	cout << "--> a * c = " << endl;
	cout << a * c << endl;

	cout << "\nMove Char" << endl;
	cout << (char)(c + a) << endl; // Hasilnya adalah s 
	                               // dikarenakan d + 15 karakter setelahnya 
	                               // yaitu : (d) - e - f - g - h - i - j - k - l - m - n - o - p - q - r - (s) --> s adalah karakter ke 15 dari d. 

	cin.get();
	return 0;
}
