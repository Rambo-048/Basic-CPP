// Array Multidimensi

#include <iostream>
#include <array>

using namespace std;

int main()
{
	const int column = 5;
	const int row = 6;
	array < array <int,column>, row> valueMD = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};

	cout << valueMD[0][4] << " ";
	cout << valueMD[5][1] << " ";
	cout << valueMD[1][2] << " ";
	cout << valueMD[4][0] << " ";
	cout << valueMD[2][3] << " " << endl;

	cout << valueMD[1][2] << " ";
	cout << valueMD[3][1] << " ";
	cout << valueMD[5][0] << " ";
	cout << valueMD[4][3] << " ";
	cout << valueMD[2][4] << " " << endl;
	cin.get();
	return 0;
}
