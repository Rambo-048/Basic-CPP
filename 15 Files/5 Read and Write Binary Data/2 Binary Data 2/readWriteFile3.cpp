#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct actionFigure {
	int id_number;
	string actionFigure_name;
	string type;
};

int main(){
	fstream myFile;
	myFile.open("data.bin", ios::trunc | ios::out | ios::in | ios::binary | ios::app);

	actionFigure figure1, figure2, figure3, figure4, figure5;

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

	cin.get();
	return 0;
}

