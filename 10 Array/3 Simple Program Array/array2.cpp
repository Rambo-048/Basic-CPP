// Create Simple Search Array Program 1

#include <iostream>
#include <array>
#include <algorithm>

const size_t arraySize = 10;

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
	std::array <int, arraySize> number = {9,4,6,7,8,1,3,2,5,0};
	
	int findNumber = 5;
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
