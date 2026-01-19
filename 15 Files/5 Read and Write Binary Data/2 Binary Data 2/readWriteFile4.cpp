#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct actionFigure {
	int id_number;
	string actionFigure_name;
	string type;
};

Movies takeData(int position, fstream &myFile){
	actionFigure bufferData;

	myFile.seekp((position-1)*sizeof(actionFigure));
	myFile.read(reinterpret_cast<char*>(&bufferData),sizeof(actionFigure));

	return bufferData;
}

int main(){
	fstream myFile;
	myFile.open("data.bin", ios::trunc | ios::out | ios::in | ios::binary | ios::app);

	actionFigure figure1, figure2, figure3, figure4, figure5, output;

	figure1.id_number = 7536801;
	figure1.actionFigure_name = "Sanctuary";
	figure1.type = "Fighter";

	figure2.id_number = 9753147;
	figure2.actionFigure_name = "Crescent";
	figure2.type = "Tank";

	figure3.id_number = 3975420;
	figure3.actionFigure_name = "Waitress";
	figure3.type = "Tank";
	
	figure4.id_number = 2480951;
	figure4.actionFigure_name = "Protector";
	figure4.type = "Fighter";

	figure5.id_number = 4284393;
	figure5.actionFigure_name = "Vanquisher";
	figure5.type = "Support";


	myFile.write(reinterpret_cast<char*>(&figure1), sizeof(actionFigure));
	myFile.write(reinterpret_cast<char*>(&figure2), sizeof(actionFigure));
	myFile.write(reinterpret_cast<char*>(&figure3), sizeof(actionFigure));
	myFile.write(reinterpret_cast<char*>(&figure4), sizeof(actionFigure));
	myFile.write(reinterpret_cast<char*>(&figure5), sizeof(actionFigure));

	output = takeData(1,myFile);

	cout << output.id_number << endl;
	cout << output.actionFigure_name << endl;
	cout << output.type << endl;

	myFile.close();

	cin.get();
	return 0;
}

