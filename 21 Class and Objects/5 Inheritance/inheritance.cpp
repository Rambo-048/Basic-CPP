#include <iostream>

using namespace std;


class Actors {
	public:
		void movieName1(){
			cout << "Cenat Cenut" << endl;
		}
		void movieName2(){
			cout << "The Puerto Kiko" << endl;
		}
		void movieName3(){
			cout << "Pening Style" << endl;
		}

};


class SpecialActors : public Movies{
	public:
		void movieName4(){
			cout << "Rotan Berjalan" << endl;
		}
		void movieName5(){
			cout << "Kuch Kuch Chote" << endl;
		}

};


int main()
{

	Actors actor1;
	actor1.movieName1();	

	Actors actor2;
	actor2.movieName4();

	SpecialActors specialActor1;
	specialActor1.movieName2();

	SpecialActors specialActor2;
	specialActor2.movieName3();

	SpecialActors specialActor3;
	specialActor3.movieName5();

	return 0;
}

