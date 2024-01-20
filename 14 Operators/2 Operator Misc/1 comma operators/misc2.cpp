#include <iostream>
#include <string>

using namespace std;

int main(){

	int a;
	int b;
	int c;

	a = ( b = 3, c = 7, (b+c));

	cout << b << endl;
	cout << c << endl;
	cout << a << endl;	

	cin.get();
	return 0;
}
