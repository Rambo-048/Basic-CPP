#include <iostream>
#include <string>

using namespace std;

int main(){
	
	string string_1("abc ABC defg DEFG hijk HIJK abcde ABCDE!!");
	string string_2("ABC Abcd abcde!!");

	cout << "1: " << string_1 << endl;
	cout << "2: " << string_2 << endl;

	// Swap String
	string_1.swap(string_2);
	cout << "Swap String" << endl;
	cout << "1: " << string_1 << endl;
	cout << "2: " << string_2 << endl;

	// Replace String
	string_2.replace(32,3,"Nice");
	
	// Replace char 1, center
	string_1.replace(
		string_1.find("abc"),
			2,
			"ABC"
	);

	cout << "replace string" << endl;
	cout << "1: " << string_1 << endl;
	cout << "2: " << string_2 << endl;


	// Insert String
	string_1.insert(8, " Abc abcde");
	cout << "insert String" << endl;
	cout << "1: " << string_1 << endl;
	cout << "2: " << string_2 << endl;

	cin.get(); 
	return 0;
}
