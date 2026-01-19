// #include <bits/stdc++.h>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <string>

using namespace std;

struct Movies {
	int id_number;
	string actor_name;
	string title;
};

Movies takeData(int &position, fstream &myFile){
	Movies bufferData;

	myFile.seekp((position-1)*sizeof(Movies));
	myFile.read(reinterpret_cast<char*>(&bufferData),sizeof(Movies));
}


int main()
{
	fstream myFile;
	Movies readData;
	myFile.open("data.bin", ios::in | ios::binary);
	int position = 1;
	readData = takeData(position,myFile);

	cout << readData.id_number << endl;
	cout << readData.actor_name << endl;
	cout << readData.title << endl;

	myFile.close();

	cin.get();
	return 0;
}

