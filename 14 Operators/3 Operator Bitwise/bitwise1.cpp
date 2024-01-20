#include <iostream>
#include <bitset>
#include <string>

using namespace std;

void printBinary(unsigned short val, string name){
	cout << name << " = " << bitset<8>(val) << endl;
}

int main(){

	unsigned short a = 5;

	cout << bitset <8>(a) << endl;

	cin.get();
	return 0;
}
