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
	const int row = 2;
	const int column = 2;
	int arrayMD[row][column] = {1,2,3,4};

	printArray(*arrayMD, row, column);

	cin.get();
	return 0;
}
