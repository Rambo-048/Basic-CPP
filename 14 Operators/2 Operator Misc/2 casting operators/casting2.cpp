#include <iostream>

using namespace std;

int main(){

	int a = 5;
	float b = 6.67f;
	char c = 'd';

	cout << "Different Syntax Same Function - divided" << endl;
	cout << (float)a / b << endl;


	cout << "\nDifferent Syntax Same Function - add" << endl;
	cout << a + (int)b << endl;

	cout << "\nTotal a + c" << endl;
	cout << "Value c " << (int)c << endl;
	cout << "--> a + c = " << endl;
	cout << a + c << endl;

	cout << "\nMove Char" << endl;
	cout << (char)(c + a) << endl; // Hasilnya adalah i 
	                               // dikarenakan d + 5 karakter setelahnya 
	                               // yaitu : (d) - e - f - g - h - (i) --> i adalah karakter ke 5 dari d. 

	cin.get();
	return 0;
}
