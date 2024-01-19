// Pointer with Prototype

#include <iostream>

using namespace std;

void function (int *);
void degree (int *);

int main()
{

	int a = 5;
	cout << "Address a : " << &a << endl;
	cout << "Value a   : " << a << endl;
	
	degree(&a);

	cout << "Value a   : " << a << endl;

	cin.get();
	return 0;
}

void function (int *b){
	cout << "Address b : " << b << endl;
	cout << "Value b   : " << *b << endl;     // dereferencing
}

void degree (int *valPtr){
	*valPtr = (*valPtr) * (*valPtr);	
}
