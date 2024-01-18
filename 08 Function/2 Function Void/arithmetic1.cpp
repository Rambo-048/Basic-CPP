#include <iostream>

using namespace std;

int kuadrat (int x) {
	int y;
	y = x * x;
	return y;
}

int add (int a, int b){
	int c;
	c = a + b;
	return c;
}


int times (int i, int j){
	int k;
	k = i * j;
	return k;
}


int main(int argc, char const *argv[])
{

	int input, total1, a, b, total2, i, j, total3;

	// Kuadrat.
	cout << "Insert Value : ";
	cin >> input;

	total1 = kuadrat (input);

	cout << total1 << endl;


	// Add.
	cout << "Insert Value a : ";
	cin >> a;
	cout << "Insert Value b ; ";
	cin >> b;

	total2 = add (a, b);

	cout << total2 << endl;


	// Times.
	cout << "Insert Value i : ";
	cin >> i;
	cout << "Insert Value j : ";
	cin >> j;

	total3 = times (i, j);

	cout << total3 << endl;

	cin.get();
	return 0;
}
