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

	a = ( b = 3, printData(b), c = 7, printData(c), (b+c));

	cout << a << endl;	

	cin.get();
	return 0;
}