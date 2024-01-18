#include <iostream>

using namespace std;

// Prototype Function
double volume_kubus(double p = 1, double l = 1, double t = 3);

int main()
{
	
	cout << "Volume Kubus : " << volume_kubus(3,4,5) << endl;

	cout << "Volume Kubus : " << volume_kubus(3,4) << endl;

	cout << "Volume Kubus : " << volume_kubus(3) << endl;

	cout << "Volume Kubus : " << volume_kubus() << endl;

	cin.get();
	return 0;
}


// Default Argumen or Standar Value
double volume_kubus (double p, double l, double t){
	return p * l * t;
}