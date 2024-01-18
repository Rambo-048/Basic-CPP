// Nou Use Void Function

#include <iostream>

using namespace std;

double count_luas(double p, double l){
	double luas = p * l;
	return luas;
}

double count_keliling(double p, double l){
	double keliling = 2 * (p + l);
	return keliling;
}


int main()
{
	double panjang, lebar;
	cout << "Insert Value P : ";
	cin >> panjang;
	cout << "Insert Value L : ";
	cin >> lebar;


	cout << "Luas : ";
	cout << count_luas (panjang, lebar) << endl;

	cout << "Keliling : ";
	cout << count_keliling (panjang, lebar) << endl;


	cin.get();
	return 0;
}