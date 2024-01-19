// Use Array Standar Library

#include <iostream>
#include <array>

using namespace std;

int main()
{
	// structure looping for array
	/*
		for(declarasi variabel : array){
			statement
		}	
	*/

	array <int, 10> arrayValue = {0,1,2,3,4,5,6,7,8,9};

	for(int value : arrayValue){
		cout << "address " << &value << " value : " << value << endl;
		value = 1; // not change array
	}

	cout << endl;
	// Manipulate Array
	for(int &valueRef : arrayValue){
		valueRef *= 2;
	}

	cout << endl;
	for(int &valueRef : arrayValue){
		cout << "address " << &valueRef << " value : " << valueRef << endl;
	}

	cin.get();
	return 0;
}