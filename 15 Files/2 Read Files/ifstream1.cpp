#include <iostream>
#include <fstream> //Stream Standar Library --> ofstream, ifstream, fstream
#include <string>

using namespace std;

int main(){

	ifstream myFile;
	string data;

	myFile.open("data.txt");

	// myFile >> data; // syntax ini hanya mengambil 1 kata dalam setiap baris.
	
	// syntax dibawah digunakan untuk mengambil 1 Data/kalimat dalam 1 baris.
	getline(myFile, data);

	getline(myFile, data);


	cout << data << endl;

	cin.get();
	return 0;
}