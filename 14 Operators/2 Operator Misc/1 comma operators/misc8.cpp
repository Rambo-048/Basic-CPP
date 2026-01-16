#include <iostream>
#include <string>

using namespace std;

void printData(int val){
	cout << val << endl;
}


int main(){

	int a;
	int b;
	int c;
	int d;
	int e;

	a = ( b = 2, printData(b), c = 4, d = 6, printData(d), e = 8, printData(e), (b*c*d*e));

	cout << a << endl;	

	cin.get();
	return 0;
}
