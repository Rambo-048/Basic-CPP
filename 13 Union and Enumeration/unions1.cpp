#include <iostream>

using namespace std;

union data{
	int a;
	char b[4];
};

int main(){
	
	data data_union;	
	
	data_union.a = 12345642;

	cout << " data a: " << data_union.a << endl;
	cout << " data b: " << data_union.b << endl;

	// Note : data a changes if data b changes

	data_union.b[0] = 'a';
	data_union.b[1] = 'b';
	data_union.b[2] = 'c';
	data_union.b[3] = 'd';

	cout << " data a: " << data_union.a << endl;
	cout << " data b: " << data_union.b << endl;

	cin.get(); 
	return 0;
}

// NB : Union adalah satu data yang punya beberapa bentuk