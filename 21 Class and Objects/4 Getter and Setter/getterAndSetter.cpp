#include <iostream>

using namespace std;


class Movie {
	private:
		string rating;
	public:
		string title;
		string director;		
		int year;

		Movie(string aTitle, string aDirector, string aRating, int aYear){
			title = aTitle;
			director = aDirector;

			setRating(aRating);
			
			year = aYear;
		}

		void setRating(string aRating){
			if(aRating == "G" || aRating == "PG" || aRating == "PG-13" || aRating == "R" || aRating == "NR"){
				rating = aRating;
			} else {
				rating = "NR";
			}
		}

		string getRating(){
			return rating;
		} 
};


int main()
{

	Movie teletubbies("Teletubbies Pagi Yang Cerah", "Anjana Pilla", "PG-13", 2090);

	teletubbies.setRating("Hello");

	cout << "Movie 1" << endl;
	cout << "Title     : " << teletubbies.title << endl;
	cout << "Directors : " << teletubbies.director<< endl;
	cout << "Rating    : " << teletubbies.getRating() << endl;
	cout << "Year      : " << teletubbies.year << endl;
	cout << "\n";


	return 0;
}

