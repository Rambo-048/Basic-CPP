#include <iostream>

using namespace std;


int main(){

	// typedef --> Create Alias for Data Type

	typedef int I;
	typedef int iVector2D[2];
	typedef unsigned long data;
	typedef double vector[2];


	// other style to create typedef
	using number = double;

	I a = 10;
	iVector2D b = {1,2};
	data c = 2712213826;
	vector d = {10.898, 15.678};
	number e = 17.89787;



	cout << "value a: " << a << endl;
	cout << "value b: " << b[0] << " and " << b[1] << endl;
	cout << "value c: " << c << endl;
	cout << "value d: " << d[0] << " and " << d[1] << endl;
	cout << "value c: " << e << endl;


	cin.get();
	return 0;
}

