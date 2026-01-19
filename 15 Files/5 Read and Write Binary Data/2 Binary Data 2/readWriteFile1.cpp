#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct actionFigure {
	int id_number;
	string actionFigure_name;
	string type;
};

int main()
{
	fstream myFile;
	actionFigure readData;
	myFile.open("data.bin", ios::in | ios::binary);

	myFile.read(reinterpret_cast<char*>(&readData),sizeof(actionFigure));

	cout << readData.id_number << endl;
	cout << readData.actionFigure_name << endl;
	cout << readData.type << endl;

	myFile.close();

	cin.get();
	return 0;
}

