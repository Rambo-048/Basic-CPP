#include <iostream>

#define ID 1

// Ini merupakan contoh penulisan Syntax If else langsung
// tanpa memanfaatkan memori
#if ID == 1
	#define LANG "Indonesia"
#else
	#define LANG "English"
#endif

#if ID == 0
	#define LANG "Indonesia"
#else
	#define LANG "English"
#endif


using namespace std;

int main(){

	cout << "Choose Language: " << LANG << endl;

	cin.get();
	return 0;
}
