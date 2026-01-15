#include <iostream>
#include <array>

using namespace std;

int main()
{

	// Create array use Standar Library
	// array <int, total array> name array

	array < int, 20 > value;

	for(int i = 0; i <= 15; i++){
		value[i] = i;
		cout << "value [" << i << "] = " << value[i];
		cout << " address : " << &value[i] << endl;
	}

	cout << endl;
	// size array
	cout << "size Array    : " << value.size() << endl;
	// first addresss from array
	cout << "first address : " << value.begin() << endl;
	// last address from array
	cout << "last address  : " << value.end() << endl;
	// value with index
	cout << "value index-2 : " << value.at(2) << endl;

	cin.get();
	return 0;
}
