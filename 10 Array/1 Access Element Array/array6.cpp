#include <iostream>

using namespace std;

int main()
{

	// Create Array
	int value[10];
	value[0] = 9;
	value[1] = 8;
	value[2] = 7;
	value[3] = 6;
	value[4] = 5;
	value[5] = 4;
	value[6] = 3;
	value[7] = 2;
	value[8] = 1;
	value[9] = 0;

	cout << &value[0] << " Value : " << value[0] << endl;
	cout << &value[1] << " Value : " << value[1] << endl;
	cout << &value[2] << " Value : " << value[2] << endl;
	cout << &value[3] << " Value : " << value[3] << endl;
	cout << &value[4] << " Value : " << value[4] << endl;
	cout << &value[5] << " Value : " << value[5] << endl;
	cout << &value[6] << " Value : " << value[6] << endl;
	cout << &value[7] << " Value : " << value[7] << endl;
	cout << &value[8] << " Value : " << value[8] << endl;
	cout << &value[9] << " Value : " << value[9] << endl;


	// Change Value
	int *ptr = value;
	*(ptr + 5) = 10;

	value[5] = 20;

	cout << endl;
	cout << &value[0] << " Value : " << value[0] << endl;
	cout << &value[1] << " Value : " << value[1] << endl;
	cout << &value[2] << " Value : " << value[2] << endl;
	cout << &value[3] << " Value : " << value[3] << endl;
	cout << &value[4] << " Value : " << value[4] << endl;
	cout << &value[5] << " Value : " << value[5] << endl;
	cout << &value[6] << " Value : " << value[6] << endl;
	cout << &value[7] << " Value : " << value[7] << endl;
	cout << &value[8] << " Value : " << value[8] << endl;
	cout << &value[9] << " Value : " << value[9] << endl;

	cout << endl;
	cout << "size array  = " << sizeof(value) << " byte" << endl;
	cout << "total array = " << sizeof(value)/sizeof(int) << endl;
	cin.get();
	return 0;
}
