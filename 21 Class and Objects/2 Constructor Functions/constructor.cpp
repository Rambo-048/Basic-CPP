#include <iostream>

using namespace std;


class LibraryMovies {
	public:
		int id_number;
		string actor_name;
		string title;
		int release_date;

		LibraryMovies(string aTitle){
			id_number = 0;
			actor_name = "Vikrant Chopra";
			title = aTitle;
			release_date = 2090;

		}

		// Constructor
		LibraryMovies(int aNumber, string aName, string aTitle, int aDate){
			id_number = aNumber;
			actor_name = aName;
			title = aTitle;
			release_date =  aDate;
		}
};


int main()
{

	LibraryMovies movie1(1357, "Vikram Kumat", "Cenat Cenut", 2000);

	LibraryMovies movie2(2468, "Vikrant Chopra", "The Puerto Kiko", 1900);

	LibraryMovies movie3(1279, "Anjana Charan", "Kuch Kuch Chote", 2060);

	LibraryMovies movie4(3467, "Thakur Rotan", "Rotan Berjalan", 1800);

	cout << "Movie 1" << endl;
	cout << "ID Number    : " << movie1.id_number << endl;
	cout << "Actor Name   : " << movie1.actor_name<< endl;
	cout << "Title        : " << movie1.title << endl;
	cout << "Release Date : " << movie1.release_date << endl;
	cout << "\n";

	cout << "Movie 2" << endl;
	cout << "ID Number    : " << movie2.id_number << endl;
	cout << "Actor Name   : " << movie2.actor_name<< endl;
	cout << "Title        : " << movie2.title << endl;
	cout << "Release Date : " << movie2.release_date << endl;
	cout << "\n";

	cout << "Movie 3" << endl;
	cout << "ID Number    : " << movie3.id_number << endl;
	cout << "Actor Name   : " << movie3.actor_name<< endl;
	cout << "Title        : " << movie3.title << endl;
	cout << "Release Date : " << movie3.release_date << endl;
	cout << "\n";

	cout << "Movie 4" << endl;
	cout << "ID Number    : " << movie4.id_number << endl;
	cout << "Actor Name   : " << movie4.actor_name<< endl;
	cout << "Title        : " << movie4.title << endl;
	cout << "Release Date : " << movie4.release_date << endl;

	return 0;
}

