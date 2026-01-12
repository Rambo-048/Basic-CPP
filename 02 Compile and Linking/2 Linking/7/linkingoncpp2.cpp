#include <iostream>

int mul (int a, int b, int c) {
	return (a*b*c);
}

int main () 
{
	std::cout << mul (15,15,15) << std::endl;
	return 0;
}
