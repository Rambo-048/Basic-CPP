#include <iostream>

using namespace std;

int main(){

	int a = 15;
	float b = 39.67f;
	char c = 'd';

	int total1;
	cout << "total use int" << endl;
	total1 = a * b;
	cout << total1 << endl;

	float total2;
	cout << "\ntotal use float" << endl; 
	total2 = a * b;
	cout << total2 << endl;

	cin.get();
	return 0;
}
