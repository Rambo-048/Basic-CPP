#include <iostream>

using namespace std;


class LibraryFigure {
	public:
		int id_number;
		string actionFIgure_name;
		string type;
		int total_release;
};


int main()
{

	LibraryFigure figure1;
	figure1.id_number = 262571611665414;
	figure1.actionFigure_name = "Empress";
	figure1.type = "Support";
	figure1.total_release = 242080;

	LibraryFigure figure2;
	figure2.id_number = 100466804415132;
	figure2.actionFigure_name = "Maiden";
	figure2.type = "Fighter";
	figure2.total_release = 241050;
	
	LibraryFigure figure3;
	figure3.id_number = 933753974633638223;
	figure3.actionFigure_name = "Waitress";
	figure3.type = "Support";
	figure3.total_release = 241760;

	LibraryFigure figure4;
	figure4.id_number = 166437176035;
	figure4.actionFigure_name = "Dreadnought";
	figure4.type = "Fighter";
	figure4.total_release = 24970;
	
	LibraryFigure figure5;
	figure5.id_number = 10629254188645633;
	figure5.actionFigure_name = "Mighty";
	figure5.type = "Tank";
	figure5.total_release = 241080;
	
	LibraryFigure figure6;
	figure6.id_number = 415562572851380;
	figure6.actionFigure_name = "Apocalypse";
	figure6.type = "Support";
	figure6.total_release = 24890;

	LibraryFigure figure7;
	figure7.id_number = 677625848439717443243;
	figure7.actionFigure_name = "Blossom";
	figure7.type = "Support";
	figure7.total_release = 241511;
	
	LibraryFigure figure8;
	figure8.id_number = 26764039951263262345;
	figure8.actionFigure_name = "Cosmic";
	figure8.type = "Tank";
	figure8.total_release = 241312;

	cout << "Figure 1" << endl;
	cout << "ID Number            : " << figure1.id_number << endl;
	cout << "Action Figure Name   : " << figure1.actionFigure_name << endl;
	cout << "Type                 : " << figure1.type << endl;
	cout << "Release Total        : " << figure1.total_release << endl;
	cout << "\n";

	cout << "Figure 2" << endl;
	cout << "ID Number            : " << figure2.id_number << endl;
	cout << "Action Figure Name   : " << figure2.actionFigure_name << endl;
	cout << "Type                 : " << figure2.type << endl;
	cout << "Release Total        : " << figure2.total_release << endl;
	
	cout << "Figure 3" << endl;
	cout << "ID Number            : " << figure3.id_number << endl;
	cout << "Action Figure Name   : " << figure3.actionFigure_name << endl;
	cout << "Type                 : " << figure3.type << endl;
	cout << "Release Total        : " << figure3.total_release << endl;
	cout << "\n";

	cout << "Figure 4" << endl;
	cout << "ID Number            : " << figure4.id_number << endl;
	cout << "Action Figure Name   : " << figure4.actionFigure_name << endl;
	cout << "Type                 : " << figure4.type << endl;
	cout << "Release Total        : " << figure4.total_release << endl;
	
	cout << "Figure 5" << endl;
	cout << "ID Number            : " << figure5.id_number << endl;
	cout << "Action Figure Name   : " << figure5.actionFigure_name << endl;
	cout << "Type                 : " << figure5.type << endl;
	cout << "Release Total        : " << figure5.total_release << endl;
	
	cout << "Figure 6" << endl;
	cout << "ID Number            : " << figure6.id_number << endl;
	cout << "Action Figure Name   : " << figure6.actionFigure_name << endl;
	cout << "Type                 : " << figure6.type << endl;
	cout << "Release Total        : " << figure6.total_release << endl;
	cout << "\n";

	cout << "Figure 7" << endl;
	cout << "ID Number            : " << figure7.id_number << endl;
	cout << "Action Figure Name   : " << figure7.actionFigure_name << endl;
	cout << "Type                 : " << figure7.type << endl;
	cout << "Release Total        : " << figure7.total_release << endl;
	
	cout << "Figure 8" << endl;
	cout << "ID Number            : " << figure8.id_number << endl;
	cout << "Action Figure Name   : " << figure8.actionFigure_name << endl;
	cout << "Type                 : " << figure8.type << endl;
	cout << "Release Total        : " << figure8.total_release << endl;



	return 0;
}
