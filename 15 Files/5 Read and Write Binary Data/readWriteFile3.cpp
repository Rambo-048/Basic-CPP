#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Movies {
	int id_number;
	string actor_name;
	string title;
};

int main(){
	fstream myFile;
	myFile.open("data.bin", ios::trunc | ios::out | ios::in | ios::binary | ios::app);

	Movies movie1, movie2, movie3;

	movie1.id_number = 123;
	movie1.actor_name = "Suraj Deboo";
	movie1.title = "The Puerto Kiko";

	movie2.id_number = 124;
	movie2.actor_name = "Vikram Kumat";
	movie2.title = "Cenat Cenut";

	movie3.id_number = 125;
	movie3.actor_name = "Yakin Kekar";
	movie3.title = "Pening Style";

	cin.get();
	return 0;
}
