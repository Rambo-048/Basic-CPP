#include <iostream>

using namespace std;

int main()
{

	// Create Array
	int value[5];
	value[0] = 0;
	value[1] = 1;
	value[2] = 2;
	value[3] = 3;
	value[4] = 4;

	cout << &value[0] << " Value : " << value[0] << endl;
	cout << &value[1] << " Value : " << value[1] << endl;
	cout << &value[2] << " Value : " << value[2] << endl;
	cout << &value[3] << " Value : " << value[3] << endl;
	cout << &value[4] << " Value : " << value[4] << endl;


	// Change Value
	int *ptr = value;
	*(ptr + 2) = 7;

	value[3] = 8;

	cout << endl;
	cout << &value[0] << " Value : " << value[0] << endl;
	cout << &value[1] << " Value : " << value[1] << endl;
	cout << &value[2] << " Value : " << value[2] << endl;
	cout << &value[3] << " Value : " << value[3] << endl;
	cout << &value[4] << " Value : " << value[4] << endl;	

	cout << endl;
	cout << "size array  = " << sizeof(value) << " byte" << endl;
	cout << "total array = " << sizeof(value)/sizeof(int) << endl;
	cin.get();
	return 0;
}
