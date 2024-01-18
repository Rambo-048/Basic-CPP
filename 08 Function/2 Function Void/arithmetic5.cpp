// USE FUNCTION VOID

#include <iostream>

using namespace std;

double count_luas (double p, double l){
	double luas = p * l;
	return luas;
}


double count_keliling(double p, double l){
	double luas = 2 * (p + l);
	return luas;
}


void show_luas(double p, double l){
	cout << "Example Use Void\n";
	cout << "Luas : ";
	cout << count_luas(p,l) << endl;
}

void show_keliling(double p, double l){
	cout << "Example Use Void\n";
	cout << "Keliling : ";
	cout << count_keliling(p,l) << endl;
}


int main()
{
	double panjang, lebar;
	cout << "Insert Value P : ";
	cin >> panjang;
	cout << "Insert Value L : ";
	cin >> lebar;


	show_luas(panjang, lebar);

	show_keliling(panjang, lebar);

	cin.get();
	return 0;
}