#include <iostream>

using namespace std;

union outerspace{
	int int_value;
	char char_value[9];
};

int main(){
	
	outerspace cosmic;	
	
	cosmic.int_value = 7176659069;

	cout << " data int_value  : " << cosmic.int_value << endl;
	cout << " data char_value : " << cosmic.char_value << endl;

	// Note : data a changes if data b changes

	cosmic.char_value[0] = 'c';
	cosmic.char_value[1] = 'e';
	cosmic.char_value[2] = 'l';
	cosmic.char_value[3] = 'e';
	cosmic.char_value[4] = 's';
	cosmic.char_value[5] = 't';
	cosmic.char_value[6] = 'i';
	cosmic.char_value[7] = 'a';
	cosmic.char_value[8] = 'l';

	cout << " data int_value  : " << cosmic.int_value << endl;
	cout << " data char_value : " << cosmic.char_value << endl;

	cin.get(); 
	return 0;
}

// NB : Union -> satu data yang punya beberapa bentuk.
//      Union -> Tipe Data Dynamic.
