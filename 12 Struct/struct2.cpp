#include <iostream>
#include <string>

using namespace std;

// Struct adalah data yang dibentuk oleh beberapa data.

struct actionFigure{
	string type;
	string position;
	float power;
	int price;
};
 
int main(){
	
	actionFigure ship;
	actionFigure aircraft;
	actionFigure animal;
	actionFigure monster;
	actionFigure outerspace;

	ship.type = "Dreadnought";
	ship.position = "Fighter";
	ship.power = 250.50f;
	ship.price = 50000;

	aircraft.type = "Valkyrie";
	aircraft.position = "Tank";
	aircraft.power = 350.50f;
	aircraft.price = 100000;
	
	animal.type = "Red Hawk";
      	animal.position = "Support";
      	animal.power = 550.50f;
	animal.price = 100000;
	
	monster.type = "Ogre";
      	monster.position = "Fighter";
      	monster.power = 450.50f;
	monster.price = 100000;
	
	outerspace.type = "Celestial";
      	outerspace.position = "Support";
      	outerspace.power = 500.50f;
	outerspace.price = 100000;


	cout << "Ship" << endl;
	cout << "- " << ship.type << endl;
	cout << "- " << ship.position << endl;
	cout << "- " << ship.power << endl;
	cout << "- " << ship.price << endl;

	cout << endl;
	cout << "Aircraft" << endl;
	cout << "- " << aircraft.type << endl;
	cout << "- " << aircraft.position << endl;
	cout << "- " << aircraft.power << endl;
	cout << "- " << aircraft.price << endl;
	
	cout << endl;
	cout << "Animal" << endl;
	cout << "- " << animal.type << endl;
	cout << "- " << animal.position << endl;
	cout << "- " << animal.power << endl;
	cout << "- " << animal.price << endl;
	
	cout << endl;
	cout << "Monster" << endl;
	cout << "- " << monster.type << endl;
	cout << "- " << monster.position << endl;
	cout << "- " << monster.power << endl;
	cout << "- " << monster.price << endl;
	
	cout << endl;
	cout << "Outerspace" << endl;
	cout << "- " << outerspace.type << endl;
	cout << "- " << outerspace.position << endl;
	cout << "- " << outerspace.power << endl;
	cout << "- " << outerspace.price << endl;

	cin.get(); 
	return 0;
}

