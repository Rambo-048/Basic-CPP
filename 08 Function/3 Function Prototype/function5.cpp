
#include <iostream>

using namespace std;

// Prototype Function
double volume_kubus(double p = 20, double l = 25, double t = 30);

int main()
{
	
	cout << "Volume Kubus : " << volume_kubus(5,10,15) << endl;

	cout << "Volume Kubus : " << volume_kubus(5,10) << endl;

	cout << "Volume Kubus : " << volume_kubus(5) << endl;

	cout << "Volume Kubus : " << volume_kubus() << endl;

	cin.get();
	return 0;
}


// Default Argumen or Standar Value
double volume_kubus (double p, double l, double t){
	return p * l * t;
}

