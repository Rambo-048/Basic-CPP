#include <iostream>
#include <string>

using namespace std;

// Struct adalah data yang dibentuk oleh beberapa data.

struct fruit{
	string color;
	float weight;
	int price;
	string flavour;
};
 
int main(){
	
	fruit jeruk;
	fruit apple;

	jeruk.color = "Orange";
	jeruk.weight = 250.50f;
	jeruk.price = 50000;
	jeruk.flavour = "Sweet Sour";

	apple.color = "Green";
	apple.weight = 350.50f;
	apple.price = 100000;
	apple.flavour = "Sweet Sour";

	cout << "jeruk" << endl;
	cout << "- " << jeruk.warna << endl;
	cout << "- " << jeruk.berat << endl;
	cout << "- " << jeruk.harga << endl;
	cout << "- " << jeruk.rasa << endl;

	cout << endl;
	cout << "apple" << endl;
	cout << "- " << apple.warna << endl;
	cout << "- " << apple.berat << endl;
	cout << "- " << apple.harga << endl;
	cout << "- " << apple.rasa << endl;

	cin.get(); 
	return 0;
}
