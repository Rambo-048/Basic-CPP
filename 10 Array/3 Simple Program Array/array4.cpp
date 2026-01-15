#include <iostream>
#include <array>
#include <algorithm>

const size_t arraySize = 20;

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
	std::array <int, arraySize> number = {9,18,5,15,6,12,7,16,8,13,1,17,3,14,4,20,19,2,10,11};
	std::array <char, arraySize> character = {'i','H','e','E','f','B','g','F','h','C','a','G','c','D','d','J','I','b','j','A'};

	printArray(number);
	printArray(character);

	std::cout << std::endl;

	std::sort(number.begin(), number.end());
	printArray(number);

	std::sort(character.begin(), character.end());
	printArray(character);

	std::cin.get();
	return 0;
}
