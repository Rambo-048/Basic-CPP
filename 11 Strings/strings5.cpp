#include <iostream>
#include <string>

using namespace std;

int main(){
	
	string string_1("abc ABC defg DEFG HIJK hijk");
	string string_2("ABCD EFG ijkl IJKL abcd efg");

	cout << "1: " << string_1 << endl;
	cout << "2: " << string_2 << endl;
	cout << endl;

	// substring, mengambil string di tengah-tengah
	// substr(index,panjang)

	cout << "Substring from string 1 : ";
	cout << string_1.substr(14,8) << endl;

	cout << "Substring from string 2 : ";
	cout << string_2.substr(10,5) << endl;


	// Search Position fron Substring
	cout << endl;
	cout << "Position From Substring : " << endl;
	cout << string_1.find("ABC") << endl;
	cout << string_2.find("abcd") << endl;

	cout << endl;
	cout << "Search position char hi dari string 1 : \n";
	int a = string_1.find("hi");
	cout << a << endl;
	cout << string_1.find("hi", a + 1) << endl;


	// Find Position from behind
	cout << endl;
	cout << "Search Position ab from Behind" << endl;
	cout << string_2.rfind("ab") << endl;

	cin.get(); 
	return 0;
}
