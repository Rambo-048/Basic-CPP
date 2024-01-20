#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Movies {
	int id_number;
	string actor_name;
	string title;
};

Movies takeData(int position, fstream &myFile){
	Movies bufferData;

	myFile.seekp((position-1)*sizeof(Movies));
	myFile.read(reinterpret_cast<char*>(&bufferData),sizeof(Movies));

	return bufferData;
}

int main(){
	fstream myFile;
	myFile.open("data.bin", ios::trunc | ios::out | ios::in | ios::binary | ios::app);

	Movies movie1, movie2, movie3, output;

	movie1.id_number = 123;
	movie1.actor_name = "Suraj Deboo";
	movie1.title = "The Puerto Kiko";

	movie2.id_number = 124;
	movie2.actor_name = "Vikram Kumat";
	movie2.title = "Cenat Cenut";

	movie3.id_number = 125;
	movie3.actor_name = "Yakin Kekar";
	movie3.title = "Pening Style";


	myFile.write(reinterpret_cast<char*>(&movie1), sizeof(Movies));
	myFile.write(reinterpret_cast<char*>(&movie2), sizeof(Movies));
	myFile.write(reinterpret_cast<char*>(&movie3), sizeof(Movies));

	output = takeData(1,myFile);

	cout << output.id_number << endl;
	cout << output.actor_name << endl;
	cout << output.title << endl;

	myFile.close();

	cin.get();
	return 0;
}



