#include <iostream>
#include <string>

using namespace std;

int main(){
	
	string string_1("rescuer CASTLE Beacon COSMIC hawk glacier Blossom IMPERIAL fierce Apocalypse");
	string string_2("CELESTIAL Sparkle sacred Spear ORCHID mighty DREADNOUGHT Cyclone paragon Vessel");

	cout << "1: " << string_1 << endl;
	cout << "2: " << string_2 << endl;

	// Swap String
	string_1.swap(string_2);
	cout << "Swap String" << endl;
	cout << "1: " << string_1 << endl;
	cout << "2: " << string_2 << endl;

	// Replace String
	string_2.replace(29,4,"Vanguard");
	
	// Replace char 1, center
	string_1.replace(
		string_1.find("Spear"),
		5,"Empress"
	);

	cout << "replace string" << endl;
	cout << "1: " << string_1 << endl;
	cout << "2: " << string_2 << endl;


	// Insert String
	string_1.insert(10, "Inferno GLIDER");
	string_2.insert(15, "Whimsical IMPISH");
	cout << "insert String" << endl;
	cout << "1: " << string_1 << endl;
	cout << "2: " << string_2 << endl;

	cin.get(); 
	return 0;
}
