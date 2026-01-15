// Create Simple Search Array Program 1

#include <iostream>
#include <array>
#include <algorithm>

const size_t arraySize = 30;

void printArray(std::array <int, arraySize> &number){
	std::cout << "Array: ";
	for(int &a : number){
		std::cout << a << " ";
	}
	std::cout << std::endl;
}

void printArray(std::array <char, arraySize> &number){
	std::cout << "Array: ";
	for(char &a : number){
		std::cout << a << " ";
	}
	std::cout << std::endl;
}

int main(){
	std::array <int, arraySize> number = {9,18,23,5,21,15,6,25,12,7,27,16,24,8,13,29,1,17,3,14,30,4,20,22,19,2,26,10,28,11};
	
	int findNumber = 10;
	bool found;
	// sort data
	// search ---> binary_search

	std::sort(number.begin(), number.end());
	found = std::binary_search(number.begin(), number.end(), findNumber);

	printArray(number);

	std::cout << found << std::endl;
	std::cin.get();
	return 0;
}
