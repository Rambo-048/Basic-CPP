#include <iostream>

using namespace std;

union name{
	int int_value;
	char char_value[4];
};

int main(){
	
	name suraj;	
	
	suraj.int_value = 1325467890;

	cout << " data int_value  : " << suraj.int_value << endl;
	cout << " data char_value : " << suraj.char_value << endl;

	// Note : data a changes if data b changes

	suraj.char_value[0] = 'a';
	suraj.char_value[1] = 'b';
	suraj.char_value[2] = 'c';
	suraj.char_value[3] = 'd';

	cout << " data int_value  : " << suraj.int_value << endl;
	cout << " data char_value : " << suraj.char_value << endl;

	cin.get(); 
	return 0;
}

// NB : Union -> satu data yang punya beberapa bentuk.
//      Union -> Tipe Data Dynamic.