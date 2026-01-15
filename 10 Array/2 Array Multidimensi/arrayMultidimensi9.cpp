
#include <iostream>

using namespace std;

void printArray(int *ptrArray, int row, int column){
	int index = 0;
	for(int i = 0; i < row; i++){
		cout << "[ ";
		for (int j = 0; j < column; j++){
			cout << *(ptrArray + index) << " ";
			index++;
		}
		cout << "]" << endl;
	}
}

int main()
{
	// array multidimensi
	// array[row][column]
	const int row = 10;
	const int column = 5;
	int arrayMD[row][column] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50};

	printArray(*arrayMD, row, column);

	cin.get();
	return 0;
}

