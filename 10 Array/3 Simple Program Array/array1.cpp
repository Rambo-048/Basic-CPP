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
	std::array <char, arraySize> character = {'c','h','j','e','r','t','y','v','b','a'};

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
