#include <iostream>

using namespace std;

int main(){

	int a = 5;
	float b = 6.67f;
	char c = 'd';

	int total1;
	cout << "total use int" << endl;
	total1 = a + b;
	cout << total1 << endl;

	float total2;
	cout << "\ntotal use float" << endl; 
	total2 = a + b;
	cout << total2 << endl;

	cin.get();
	return 0;
}
