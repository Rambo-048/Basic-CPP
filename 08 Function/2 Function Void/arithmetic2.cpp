#include <iostream>

using namespace std;

int kuadrat (int x){
	int y;
	y = x * x;  
	return y;
}

int divided (int a, int b){
	int c;
	c = a / b;
	return c;
}

	
int main(int argc, char const *argv[])
{

	int input, total1, a, b, total2;
	cout << "Insert Number : ";
	cin >> input;

	total1 = kuadrat (input);

	cout << total1 << endl;


	cout << "Insert Value a : ";
	cin >> a;
	cout << "Insert Value b : ";
	cin >> b;

	total2 = divided (a,b);

	cout << total2 << endl;


	cin.get();
	return 0;
}