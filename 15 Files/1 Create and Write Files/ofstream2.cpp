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
	myFile << "\nLive Your Life To The Fullest And Enjoy Every Moment Of It";
	myFile.close();

	int a = 7065738289;
	myFile.open("data1.txt", ios::out); 
	myFile << "Life Is Tough So You Are\n";
	myFile << a;
	myFile.close();	

	myFile.open("data2.txt", ios::trunc); 
	myFile << "\nNobody Said It Would Be Easy, So Don't Ever Give Up When It Gets Hard";
	myFile.close();
	

	cin.get();
	return 0;
}
