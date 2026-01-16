#include <iostream>
#include <string>

using namespace std;

int main(){

	int a;
	int b;
	int c;
	int d;
	int e;

	a = ( b = 2, cout << b << endl, c = 4, cout << c << endl, d = 6, cout << d << endl, e = 8, cout << e << endl, (b*c*d*e));

	cout << a << endl;	

	cin.get();
	return 0;
}
