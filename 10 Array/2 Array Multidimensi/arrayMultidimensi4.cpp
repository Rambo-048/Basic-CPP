// Array Multidimensi

#include <iostream>
#include <array>

using namespace std;

int main()
{
	const int column = 3;
	const int row = 2;
	array < array <int,column>, row> valueMD = {0,1,2,3,4,5};

	cout << valueMD[0][0] << " ";
	cout << valueMD[0][1] << " ";
	cout << valueMD[0][2] << " " << endl;

	cout << valueMD[1][0] << " ";
	cout << valueMD[1][1] << " ";
	cout << valueMD[1][2] << " " << endl;
	cin.get();
	return 0;
}