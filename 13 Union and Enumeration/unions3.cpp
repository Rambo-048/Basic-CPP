#include <iostream>

using namespace std;

union data{
	int a;
	char b[6];
};

int main(){
	
	data data_union;	
	
	data_union.a = 7176659069;

	cout << " data a: " << data_union.a << endl;
	cout << " data b: " << data_union.b << endl;

	// Note : data a changes if data b changes

	data_union.b[0] = 'c';
	data_union.b[1] = 'o';
	data_union.b[2] = 's';
	data_union.b[3] = 'm';
	data_union.b[4] = 'i';
	data_union.b[5] = 'c';


	cout << " data a: " << data_union.a << endl;
	cout << " data b: " << data_union.b << endl;

	cin.get(); 
	return 0;
}

// NB : Union adalah satu data yang punya beberapa bentuk

