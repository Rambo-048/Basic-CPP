
#include <iostream>

using namespace std;

// Prototype Function
double volume_kubus(double p = 30, double l = 40, double t = 50);

int main()
{
	
	cout << "Volume Kubus : " << volume_kubus(10,20,30) << endl;

	cout << "Volume Kubus : " << volume_kubus(10,20) << endl;

	cout << "Volume Kubus : " << volume_kubus(10) << endl;

	cout << "Volume Kubus : " << volume_kubus() << endl;

	cin.get();
	return 0;
}


// Default Argumen or Standar Value
double volume_kubus (double p, double l, double t){
	return p * l * t;
}

