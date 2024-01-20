#include <iostream>
#include <fstream>
#include <string>
#include <limits>
#include "crud.h"


int main(){

	std::fstream data;
	
	crud::checkDatabase(data);

	int Chosen = crud::getOption();
	char is_continue;

	enum option{CREATE = 1, READ, UPDATE, DELETE, FINISH};

	while(Chosen != FINISH){
		
		switch(Chosen){
			case CREATE:
				std::cout << "Add Data Movies" << std::endl;
				crud::addDataMovies(data);
				break;
			case READ:
				std::cout << "Show Data Movies" << std::endl;
				crud::displayDataMovies(data);
				break;
			case UPDATE:
				std::cout << "Change Data Movies" << std::endl;
				crud::displayDataMovies(data);
				crud::updateRecord(data);
				crud::displayDataMovies(data);
				break;
			case DELETE:
				std::cout << "Delete Data Movies" << std::endl;
				crud::displayDataMovies(data);
				crud::deleteRecord(data);
				crud::displayDataMovies(data);
				break;
			default:
				std::cout << "Data Movies Not Found" << std::endl;
				break;
		}

		label_continue:

		std::cout << "Next?(y/n) : ";
		std::cin >> is_continue;
		if ( (is_continue == 'y') | (is_continue == 'Y')){
			Chosen = crud::getOption();
		} else if ((is_continue == 'n') | (is_continue == 'N')){
			break;
		} else {
			goto label_continue;
		}
	}

	std::cout << "End Program" << std::endl;

	std::cin.get();
	return 0;
}

