
#include <iostream>

using namespace std;

// Prototype Function
double volume_kubus(double p = 25, double l = 35, double t = 45);

int main()
{
	
	cout << "Volume Kubus : " << volume_kubus(5,15,25) << endl;

	cout << "Volume Kubus : " << volume_kubus(5,15) << endl;

	cout << "Volume Kubus : " << volume_kubus(5) << endl;

	cout << "Volume Kubus : " << volume_kubus() << endl;

	cin.get();
	return 0;
}


// Default Argumen or Standar Value
double volume_kubus (double p, double l, double t){
	return p * l * t;
}

