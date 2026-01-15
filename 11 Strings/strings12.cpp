#include <iostream>
#include <string>

using namespace std;

int main(){
	
	string string_1("cyclone IMPERIAL Castle VESSEL Cosmic spear beacon Dreadnought PARAGON celestial");
	string string_2("BLOSSOM FIERCE orchid Apocalypse Rescuer sparkle SACRED Glacier HAWK Mighty");

	cout << "1: " << string_1 << endl;
	cout << "2: " << string_2 << endl;
	cout << endl;

	// substring, mengambil string di tengah-tengah
	// substr(index,panjang)

	cout << "Substring From String 1 : ";
	cout << string_1.substr(17,6) << endl;

	cout << "Substring From String 2 : ";
	cout << string_2.substr(22,10) << endl;


	// Search Position fron Substring
	cout << endl;
	cout << "Position From Substring : " << endl;
	cout << string_1.find("PARAGON") << endl;
	cout << string_2.find("Mighty") << endl;

	cout << endl;
	cout << "Search Position Char : \n";
	int a = string_1.find("pear");
	cout << a << endl;
	cout << string_1.find("pear", a + 1) << endl;
	cout << endl;
	cout << string_1.find("pear") << endl;
	cout << a + 1 << endl;


	// Find Position from behind
	cout << endl;
	cout << "Search Position From Behind" << endl;
	cout << string_2.rfind("park") << endl;

	cin.get(); 
	return 0;
}
