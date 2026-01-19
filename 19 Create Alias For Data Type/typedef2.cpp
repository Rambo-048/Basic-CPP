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

	I a = 40;
	iVector2D b = {10,10};
	data c = 2710203926;
	vector d = {10.789, 10.678};
	number e = 20.89787;



	cout << "value a: " << a << endl;
	cout << "value b: " << b[0] << " and " << b[1] << endl;
	cout << "value c: " << c << endl;
	cout << "value d: " << d[0] << " and " << d[1] << endl;
	cout << "value c: " << e << endl;


	cin.get();
	return 0;
}

