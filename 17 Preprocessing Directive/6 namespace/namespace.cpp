#include <iostream>

void function(){
		std::cout << "Write function use std" << std::endl;
	}

int main(){
	function();
	std::cout << test::b << std::endl;
	test::function();
	test::cout(100);
	std::cin.get();
	return 0;
}