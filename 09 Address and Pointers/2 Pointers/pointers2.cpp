// int a and b use same memory

#include <iostream>

using namespace std;

void function(int *b){
	cout << "Address b  : " << b << endl;
	cout << "Value b    : " << *b <<endl;     // dereferencing
}

int main()
{

	int a = 5;
	cout << "Address a  : " << &a << endl;
	cout << "Value a    : " << a << endl << endl;

	function(&a);     // function with input pointer	

	cin.get();
	return 0;
}