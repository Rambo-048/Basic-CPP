// #include <bits/stdc++.h>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <string>

using namespace std;

struct actionFigure {
	int id_number;
	string actionFigure_name;
	string type;
};

actionFigure takeData(int &position, fstream &myFile){
	actionFigure bufferData;

	myFile.seekp((position-1)*sizeof(actionFigure));
	myFile.read(reinterpret_cast<char*>(&bufferData),sizeof(actionFigure));
}


int main()
{
	fstream myFile;
	actionFigure readData;
	myFile.open("data.bin", ios::in | ios::binary);
	int position = 1;
	readData = takeData(position,myFile);

	cout << readData.id_number << endl;
	cout << readData.actionFigure_name << endl;
	cout << readData.type << endl;

	myFile.close();

	cin.get();
	return 0;
}

