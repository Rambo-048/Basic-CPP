
#include <iostream>

using namespace std;

int x = 30;   // Variabel Global


int variable_global(){      // Variabel Global scope variable_global
	return x;          
}


int variable_local() {
	int x = 35;              // Variabel Local scope variable_local
	return x;
}



int main()
{
	cout << "1. Variabel Global : " << x << endl;
	int x = 50;
	cout << "2. Variabel Local Main : " << x << endl;
	cout << "3. Variabel global : " << variable_global() << endl;
	cout << "4. Variabel Local Main : " << x << endl;
	cout << "5. Variabel variable_local : " << variable_local() << endl;
	cout << "6. Variabel Local Main : " << x << endl;

	cout << "7. Variabel Local Main : " << x << endl;
	{
		cout << "8. Variabel Local Main : " << x << endl;
		int x = 8;
		cout << "9. Variabel Local Block : " << x << endl;


		cout << "10. Variabel variable_global : " << variable_global() << endl;
	}	

	cout << "11. Variabel Local Main : " << x << endl;

	cin.get();
	return 0;
}

