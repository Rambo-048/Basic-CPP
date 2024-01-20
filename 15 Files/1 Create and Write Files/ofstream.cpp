#include <iostream>
#include <fstream> //Stream Standar Library --> ofstream, ifstream, fstream

using namespace std;

int main()
{

	ofstream myFile;

	// 3 MODE CREATE AND WRITE DATA:
	// ios::out = default, operasi output;
	// ios::app = write on the last row;
	// ios::trunc = default, create a file --> Replace/Overwrite a Data


	myFile.open("data3.txt", ios::app); // app --> append
	myFile << "\nwrite new data on data3";
	myFile.close();

	int a = 123876;
	myFile.open("data1.txt", ios::out); 
	myFile << "write new data on data1\n";
	myFile << a;
	myFile.close();	

	myFile.open("data2.txt", ios::trunc); 
	myFile << "\nwrite new data on data2";
	myFile.close();
	

	cin.get();
	return 0;
}


