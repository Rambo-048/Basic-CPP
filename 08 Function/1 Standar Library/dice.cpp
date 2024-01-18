// "Create Simple Dice"

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{

	char next;

	while (true){
		cout << "Shake/Throw/Drop/Rolling a Dice? (y/n)";
		cin >> next;

		if(next == 'y'){
			cout << 1 + (rand() % 6) << endl;
		}else if(next == 'n'){
			break;
		}else{
			cout << "-CONDITION-ERROR-NOT-FOUND- Choose y/n!!\n";
		}
	}

	cin.get();
	return 0;
}
