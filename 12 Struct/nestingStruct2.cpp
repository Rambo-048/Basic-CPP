#include <iostream>
#include <string>

using namespace std;

struct actionFigure{
	string name;
	int release;
};

struct variation{
	string title;
	string genre;
	int year;
	// struct action
	actionFigure actionFigure_1;
	actionFigure actionFigure_2;
};

int main(){
	
	actionFigure actionFigure1, actionFigure2;
	variation variation1, variation2;

	// create action 1
	actionFigure1.name = "Nightowls";
	actionFigure1.release = 1990;

	// create action 2
	actionFigure2.name = "Peafowls";
	actionFigure2.release = 1992;

	// create variation 1
	variation1.title = "Empress";
	variation1.genre = "Romance, Documenter";
	variation1.year = 2060;
	variation1.actionFigure_1 = actionFigure1;
	variation1.actionFigure_2 = actionFigure2;

	// create variation 2
	variation2.title = "Protector";
	variation2.genre = "Fantasy, Sci-Fi";
	variation2.year = 2070;
	variation2.actionFigure_1 = actionFigure1;
	variation2.actionFigure_2 = actionFigure2;

	cout << "Variation 1" << endl;
	cout << variation1.title << endl;
	cout << variation1.actionFigure_1.name << endl;
	cout << variation1.actionFigure_2.name << endl;

	cout << endl;
	cout << "Variation 2" << endl;
	cout << variation2.title << endl;
	cout << variation2.actionFigure_1.name << endl;
	cout << variation2.actionFigure_2.name << endl;
	
	cin.get(); 
	return 0;
}
