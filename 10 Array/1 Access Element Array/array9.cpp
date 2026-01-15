// Not Use Array Standar Library

#include <iostream>

using namespace std;

int main()
{
	// looping for array
	/*
		for(declarasi variabel : array){
			statement
		}	
	*/

	int arrayValue[10] = {1,2,3,4,5,6,7,8,9,10};

	for(int value : arrayValue){
		cout << "address " << &value << " value : " << value << endl;
		value = 1; // not change array
	}

	cout << endl;
	// manipulate array with reference
	for(int &valueRef : arrayValue){
		valueRef *= 5;
	}

	cout << endl;
	for(int &valueRef : arrayValue){
		cout << "address " << &valueRef << " value : " << valueRef << endl;
	}

	cin.get();
	return 0;
}
