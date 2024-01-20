#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Movies {
	int id_number;
	string actor_name;
	string title;
};

int main()
{
	fstream myFile;
	Movies readData;
	myFile.open("data.bin", ios::in | ios::binary);

	myFile.read(reinterpret_cast<char*>(&readData),sizeof(Movies));

	cout << readData.id_number << endl;
	cout << readData.actor_name << endl;
	cout << readData.title << endl;

	myFile.close();

	cin.get();
	return 0;
}
