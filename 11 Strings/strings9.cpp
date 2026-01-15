#include <iostream>
#include <string>

using namespace std;

int main()
{
	
	string word ("Nightowls");

	// Show Data String
	cout << word << endl;

	// Take Data from Indeks
	cout << "Index 5 : " << word[5] << endl;
	cout << "Index 6 : " << word[6] << endl;
	cout << "Index 7 : " << word[7] << endl;

	// Change alphabet on indeks
	cout << endl;
	word[5] = 'c';
	word[6] = 'r';
	word[7] = 'o';
	word[8] = 'w';
	cout << word << endl;

	// Concatenation
	// 1.
	string word2(word + " Maiden");
	cout << word2 << endl;

	// 2.
	string word3(" Cavalry");
	word2.append(word3);
	cout << word2 << endl;

	// 3.
	string word4("PEAFOWLS");
	word2 += " " + word4;
	cout << word2 << endl;

	cin.get();
	return 0;
}

