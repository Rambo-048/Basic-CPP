// "Create Random Number"

#include <iostream>
#include <cstdlib>    // standar library --> Random Function

using namespace std;

int main()
{

	for (int i = 0; i < 30; i++){
		cout << rand() << endl;
	}

	cin.get();
	return 0;
}
