// Create Simple Search Array Program 2

#include <iostream>
#include <array>
#include <algorithm>

const size_t arraySize = 50;

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
	std::array <int, arraySize> number = {9,31,18,42,23,32,5,21,33,15,41,6,25,34,12,43,35,7,27,16,36,45,24,8,13,44,29,38,37,1,17,3,47,14,50,39,46,30,4,20,22,40,19,2,48,26,10,49,28,11};
	printArray(number);
	
	int findNumber;
	bool found;
	// sort data
	// search ---> binary_search
	std::cout << "Search/Find Number in Array : ";
	std::cin >> findNumber;
	std::sort(number.begin(), number.end());
	found = std::binary_search(number.begin(), number.end(), findNumber);

	if(found){
		std::cout << "found" << std::endl;
	} else {
		std::cout << "not found" << std::endl;
	}

	std::cout << found << std::endl;
	std::cin.get();
	return 0;
}

