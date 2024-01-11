#include <iostream>

using namespace std;

int main()
{
	float a,b,total;
	char arithmetic;

	//Input Value from User
	cout << "Welcome to Mini Calculator \n \n";

	cout << "Insert First Value : ";
	cin >> a;
	cout << "Operator arithmetic +, -, *, / : ";
	cin >> arithmetic;
	cout << "Insert Second Value : ";
	cin >> b;

	cout << "\nValue Total : ";
	cout << a << arithmetic << b;

	if(arithmetic ==  '+'){     
		total = a + b;
	} else if (arithmetic == '-'){
		total = a - b;                   
	} else if (arithmetic == '*'){       
		total = a * b;                  
	} else if (arithmetic == '/'){
		total = a / b;
	} else {
		cout << "Operator-Not-Found" << endl;
	}

	cout << "=" << total << endl;

	cin.get();
	return 0;
}


// NB : File executable "calculator" menggunakan syntax yang ini.
//      sedangkan test 2-4 merupakan hasil dari perubahann 
//      penulisan syntax yang saya lakukan. 