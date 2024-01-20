#include <iostream>
#include <string>

using namespace std;

int main(){

	int a;
	int b;
	int c;

	a = ( b = 3, cout << b << endl, c = 7, cout << c << endl, (b+c));

	cout << a << endl;	

	cin.get();
	return 0;
}