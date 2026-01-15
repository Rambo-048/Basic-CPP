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
	
	int arrayMD[6][5] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};

	printArray(*arrayMD, 6, 5);

	cin.get();
	return 0;
}
