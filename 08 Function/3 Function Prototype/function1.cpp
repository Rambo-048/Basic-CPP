#include <iostream>

using namespace std;

// Prototype ------->   Prototype ini berfungsi untuk memberitahu sistem bahwa ada data yang kita jabarkan dibawah.
                     
double count_luas (double p, double l);
void println (double x);


int main()
{

	double panjang, lebar, luas;
	cout << "Insert P : ";
	cin >> panjang;
	cout << "Insert L : ";
	cin >> lebar;

	luas = count_luas(panjang, lebar);

	println (luas);

	cin.get();
	return 0;
}


// Data
	double count_luas (double p, double l){
		return p * l;		
	}

	void println (double x){
		cout << "Total : " << x << endl;
	}

// NB : jika kita melakukan penjabaran di bawah tanpa menuliskan deklarasi prototype diatas, 
// maka akan terjadi eror di karenakan sistem tidak mengerti data apa yang kita masukkan.