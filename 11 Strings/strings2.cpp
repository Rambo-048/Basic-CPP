#include <iostream>
#include <string>

using namespace std;

int main()
{
	
	string alphabet ("abcde");

	// Show Data String
	cout << alphabet << endl;

	// Take Data from Indeks
	cout << "Index 0 : " << alphabet[0] << endl;
	cout << "Index 1 : " << alphabet[1] << endl;
	cout << "Index 2 : " << alphabet[2] << endl;
	cout << "Index 3 : " << alphabet[3] << endl;

	// Change alphabet on indeks
	cout << endl;
	alphabet[2] = 'i';
	cout << alphabet << endl;

	// Concatenation
	// 1.
	string alphabet2(alphabet + "hello");
	cout << alphabet2 << endl;

	// 2.
	string alphabet3(" morning");
	alphabet2.append(alphabet3);
	cout << alphabet2 << endl;

	// 3.
	string alphabet4("ABCDE");
	alphabet2 += " " + alphabet4;
	cout << alphabet2 << endl;

	cin.get();
	return 0;
}
