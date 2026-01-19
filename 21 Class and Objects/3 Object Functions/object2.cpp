#include <iostream>

using namespace std;


class LibraryFigure {
	public:
		int id_number;
		string actionFigure_name;
		string type;
		int total_release;
		double rating;

		figure(int aNumber, string aName, string aType, int aTotal, double aRating){
			id_number = aNumber;
			actionFigure_name = aName;
			type = aType;
			total_release = aTotal;
			rating = aRating;

		}	

		bool ratingFigure(){
			if(rating >= 6.5){
				return true;
			}
			return false;
		}	
};


int main()
{

	LibraryFigure figure1("Nightowl", "Tank", 1425134075, 5.3);

	LibraryFigure figure2("Peafowl", "Support", 1741261676, 4.3);


	cout << "Figure 1 : " << figure1.ratingFigure() << endl;
	cout << "Figure 2 : " << figure2.ratingFigure() << endl;
	
	return 0;
}

