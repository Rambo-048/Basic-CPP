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
	
	int arrayMD[2][2] = {1,2,3,4};

	printArray(*arrayMD, 2, 2);

	cin.get();
	return 0;
}
