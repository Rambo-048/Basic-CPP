#include <iostream>
#include <string>

using namespace std;

int main(){

	int a;
	int b;
	int c;
	int d;
	int e;

	a = ( b = 2, c = 4, d = 6, e = 8, (b*c*d*e));

	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << d << endl;
	cout << e << endl;

	cin.get();
	return 0;
}
