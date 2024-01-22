#include <iostream>

using namespace std;


class Movies {
	public:
		int id_number;
		string actor_name;
		string title;
		int release_date;
		double rating;

		movie(int aNumber, string aName, string aTitle, int aDate, double aRating){
			id_number = aNumber;
			actor_name = aName;
			title = aTitle;
			release_date = aDate;
			rating = aRating;

		}	

		bool ratingMovies(){
			if(rating >= 6.5){
				return true;
			}
			return false;
		}	
};


int main()
{

	Movies movie1("Vikram Kumat", "Cenat Cenut", 2319314614, 8.7);

	Movies movie2("Vikrant Chopra", "The Puerto Kiko", 33235624, 9.0);


	cout << "Movie 1 : " << movie1.ratingMovies() << endl;
	cout << "Movie 2 : " << movie2.ratingMovies() << endl;
	
	return 0;
}

