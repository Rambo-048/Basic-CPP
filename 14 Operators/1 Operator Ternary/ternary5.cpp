#include <iostream>
#include <string>

using namespace std;

// ternary operator adalah tanda tanya (?)
// kondisi ? hasil1 : hasil 2


int main(){
	
	int a,b;
	string total1, total2, output;

	total1 = "Gladiator";     // True
	total2 = "Inferno";    // False

	a = 30;
	b = 50; 

	output = (a < b) ? total1 : total2;

	cout << output << endl;

	cin.get(); 
	return 0;
}
