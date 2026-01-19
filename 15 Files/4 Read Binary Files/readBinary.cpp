#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){

	fstream myFile;
	int value;
	myFile.open("data.bin", ios::in | ios::binary);

	myFile.read(reinterpret_cast<char*>(&value), sizeof(value));

	
	cout << "Size Integer = " << sizeof(value) << endl;

	cout << value << endl;

	cin.get();
	return 0;
}


// fstream myFile;
// int number1 = 640140;
// //int number2 = 8665787185658268
// myFile.open("data.bin", ios::out | ios::binary);

// myFile.write(reinterpret_cast<char*>(&number), sizeof(number));

// myFile.close();
