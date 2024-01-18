#include <iostream>

using namespace std;

// Prototype
double count_luas (double p, double l);
void println (double x);

int main()
{

	double panjang, lebar, luas;
	cout << "Insert P : ";
	cin >> panjang;
	cout << "Insert L: ";
	cin >> lebar;

	luas = count_luas(panjang, lebar);

	println (luas);

	cin.get();
	return 0;
}


// Data :

double count_luas (double p, double l){
	return p * l;
}

void println (double x) {
	cout << "Total : " << x << endl;
}