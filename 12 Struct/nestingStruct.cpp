#include <iostream>
#include <string>

using namespace std;

struct actor{
	string name;
	int born;
};

struct movie{
	string title;
	string genre;
	int year;
	// struct actor
	actor actor_1;
	actor actor_2;
};

int main(){
	
	actor actor1, actor2;
	movie movie1, movie2;

	// create actor 1
	actor1.name = "Vikram Kekar";
	actor1.born = 1992;

	// create actor 2
	actor2.name = "Vikrant Chopra";
	actor2.born = 1995;

	// create movie 1
	movie1.title = "Napoleon";
	movie1.genre = "Romance, Documenter";
	movie1.year = 2090;
	movie1.actor_1 = actor1;
	movie1.actor_2 = actor2;

	// create movie 2
	movie2.title = "The Prisoners";
	movie2.genre = "Horor, Thriler";
	movie2.year = 2078;
	movie2.actor_1 = actor1;
	movie2.actor_2 = actor2;

	cout << "movie 1" << endl;
	cout << movie1.title << endl;
	cout << movie1.actor_1.name << endl;
	cout << movie1.actor_2.name << endl;

	cout << endl;
	cout << "movie 2" << endl;
	cout << movie2.title << endl;
	cout << movie2.actor_1.name << endl;
	cout << movie2.actor_2.name << endl;

	
	cin.get(); 
	return 0;
}
