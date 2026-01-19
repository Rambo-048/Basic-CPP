
#include <iostream>

using namespace std;


class LibraryFigure {
	public:
		int id_number;
		string actionFigure_name;
		string type;
		int total_release;

		LibraryFigure(string aType){
			id_number = 0;
			actionFigure_name = "Castle";
			title = aTitle;
			total_release = 242561855;

		}

		// Constructor
		LibraryFigure(int aNumber, string aName, string aType, int aTotal){
			id_number = aNumber;
			actionFigure_name = aName;
			type = aType;
			total_release =  aTotal;
		}
};


int main()
{

	LibraryFigure figure1(2524817223135332, "Glider", "Tank", 25901);

	LibraryFigure figure2(5942491776105218, "Crescent", "Support", 251302);

	LibraryFigure figure3(20677168295214075, "Glacier", "Fighter", 251403);

	LibraryFigure figure4(491450, "Rescuer", "Support", 25304);

	cout << "Figure 1" << endl;
	cout << "ID Number            : " << figure1.id_number << endl;
	cout << "Action Figure Name   : " << figure1.actor_name<< endl;
	cout << "Type                 : " << figure1.type << endl;
	cout << "Release Total        : " << figure1.total_release << endl;
	cout << "\n";

	cout << "Figure 2" << endl;
	cout << "ID Number            : " << figure2.id_number << endl;
	cout << "Action Figure Name   : " << figure2.actor_name<< endl;
	cout << "Type                 : " << figure2.type << endl;
	cout << "Release Total        : " << figure2.total_release << endl;
	cout << "\n";

	cout << "Figure 3" << endl;
	cout << "ID Number            : " << figure3.id_number << endl;
	cout << "Action Figure Name   : " << figure3.actor_name<< endl;
	cout << "Type                 : " << figure3.type << endl;
	cout << "Release Total        : " << figure3.total_release << endl;
	cout << "\n";

	cout << "Figure 4" << endl;
	cout << "ID Number            : " << figure4.id_number << endl;
	cout << "Actor Figure Name    : " << figure4.actor_name<< endl;
	cout << "Type                 : " << figure4.type << endl;
	cout << "Release Total        : " << figure4.total_release << endl;

	return 0;
}

