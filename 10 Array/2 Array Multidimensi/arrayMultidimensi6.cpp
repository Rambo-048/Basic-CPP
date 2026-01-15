// Array Multidimensi

#include <iostream>

using namespace std;

int main()
{
	// array multidimensi
	// array[row][column]
	int arrayMD[5][5] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};

	cout << arrayMD[0][0] << " " << arrayMD[0][5] << endl;
	cout << arrayMD[1][5] << " " << arrayMD[4][1] << endl;
	cout << arrayMD[0][3] << " " << arrayMD[3][2] << endl;
	cout << arrayMD[5][0] << " " << arrayMD[2][4] << endl;
	cout << arrayMD[1][0] << " " << arrayMD[4][5] << endl;
	
	cin.get();
	return 0;
}
