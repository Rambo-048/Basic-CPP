// Preprocessing Directive
#include <iostream>

// note --> write Macro use Capital Letter.
#define PI 3.14159265359
#define LANGUAGE "English"

// Macro for Function
#define DEGREE(X) (X*X)
#define MAX(A,B) ((A > B) ? A:B)


// Last from Preprocessing Directive

using namespace std;

int main(){

	cout << "value PI: " << PI << endl;
	cout << "Language: " << LANGUAGE << endl; // --- like this --->  cout << "Indonesia" << endl;

	cout << "Degree: " << DEGREE(5) << endl;

	cout << "Max: " << MAX(5,4) << endl;
	cout << "Max: " << ((5 > 3) ? 5:3) << endl;


	#undef LANGUAGE
	#define LANGUAGE "English"
	cout << LANGUAGE << endl;


	cin.get();
	return 0;
}

// Note : pada dasarnya penggunaan define merupakan sistem penulisan/pengambilan data 
//        tanpa memanfaatkan memori.