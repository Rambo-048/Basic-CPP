#include <iostream>
#include <fstream> //Stream Standar Library --> ofstream, ifstream, fstream
#include <string>

using namespace std;

int main(){

	ifstream myFile;
	string data, buffer;

	myFile.open("data.txt");
	
	// syntax dibawah digunakan jika kita ingin menggabungkan kedua buah kalimat. yaitu kalimat di baris 1 dan 2
	getline(myFile, buffer);
	data.append(buffer);
	getline(myFile, buffer);
	data.append("\n" + buffer);

	cout << data << endl;

	cin.get();
	return 0;
}