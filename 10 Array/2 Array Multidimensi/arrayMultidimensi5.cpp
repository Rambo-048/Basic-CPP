#include <iostream>
#include <array>

using namespace std;

const int column = 3;
const int row = 2;
void printArray(array < array <int,column>, row > &valueArray){
	for (array <int,column> vectorRow : valueArray){
		cout << "[ ";
		for(int valueColumn: vectorRow){
			cout << valueColumn << " ";
		}
		cout << "]" << endl;
	}
} 

int main()
{
	
	array < array <int,column>, row> valueMD = {0,1,2,3,4,5};

	printArray(valueMD);

	cin.get();
	return 0;
}
