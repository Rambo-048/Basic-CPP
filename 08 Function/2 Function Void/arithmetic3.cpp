#include <iostream>

using namespace std;

int kuadrat (int x){
	int y;
	y = x * x;
	return y;
}

void showData (int input){
	cout << "Show Data with Function Void\n";
	cout << input << endl;           			
}


int main(int argc, char const *argv[])
{

	int input, total;
	cout << "Insert Number : ";
	cin >> input;

	total = kuadrat (input);
	showData (total);  

	cin.get();
	return 0;
}
