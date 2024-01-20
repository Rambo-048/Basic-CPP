#include <iostream>
#include <string>

using namespace std;

// ternary operator adalah tanda tanya (?)
// condition ? total1 : total 2


int main(){
	
	int a,b;
	string total1,total2,output;

	total1 = "Suraj";     // True
	total2 = "Baroto";    // False

	a = 10; 

	cout << "insert value? ";
	cin >> b;

	// output = (a < b) ? total1 : total2;
	/*		
		^
		|
		|
	*/
	// Different Syntax but with the same function  

		if (a < b){
			output = total1;
		}else{
			output = total2;
		}

	cout << output << endl;


	cin.get(); 
	return 0;
}

