#include <iostream>

using namespace std;

int main()
{
	int a = 10;

	// pointer
	// int *aPointer = &a;  // &a -> syntax untuk mengarahkan ke address(alamat) memory yang kita gunakan


	// Null Pointer
	int *aPointer = nullptr;
	aPointer = &a;


	// int a have value and address

	cout << "Value from a   : " << a << endl;
	cout << "Address from a : " << aPointer << endl;


	// dereferencing, take data from pointer
	a = 15;
	cout << "Take value from pointer aPointer : " << *aPointer << endl;


	cin.get();
	return 0;
}
