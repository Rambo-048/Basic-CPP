#include <iostream>

using namespace std;


class LibraryMovies {
	public:
		int id_number;
		string actor_name;
		string title;
		int release_date;
};


int main()
{

	LibraryMovies movie1;
	movie1.id_number = 13579;
	movie1.actor_name = "Vikram Kumat";
	movie1.title = "Cenat Cenut";
	movie1.release_date = 2090;

	LibraryMovies movie2;
	movie2.id_number = 24680;
	movie2.actor_name = "Thakur Rotan";
	movie2.title = "Rotan Berjalan";
	movie2.release_date = 2070;

	cout << "Movie 1" << endl;
	cout << "ID Number    : " << movie1.id_number << endl;
	cout << "Actor Name   : " << movie1.actor_name << endl;
	cout << "Title        : " << movie1.title << endl;
	cout << "Release Date : " << movie1.release_date << endl;
	cout << "\n";

	cout << "Movie 2" << endl;
	cout << "ID Number    : " << movie2.id_number << endl;
	cout << "Actor Name   : " << movie2.actor_name << endl;
	cout << "Title        : " << movie2.title << endl;
	cout << "Release Date : " << movie2.release_date << endl;


	return 0;
}

