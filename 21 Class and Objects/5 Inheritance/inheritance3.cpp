#include <iostream>

using namespace std;


class actionFigure {
	public:
		void Type1(){
			cout << "Assasin" << endl;
		}
		void Type2(){
			cout << "Mage" << endl;
		}
		void Type3(){
			cout << "Fighter" << endl;
		}

};


class SpecialFigures : public LibraryFigure{
	public:
		void Type4(){
			cout << "Tank" << endl;
		}
		void Type5(){
			cout << "Support" << endl;
		}
		void Type6(){
			cout << "Marksman" << endl;
		}

};


int main()
{

	actionFigure figure1;
	figure1.Type1();	

	actionFigure figure2;
	figure2.Type2();
	
	actionFigure figure3;
	figure3.Type3();

	SpecialFigures specialFigure1;
	specialFigure1.Type4();

	SpecialFigures specialFigure2;
	specialFigure2.Type5();
	
	SpecialFigures specialFigure3;
	specialFigure3.Type6();

	return 0;
}

