#include <iostream>
#include <fstream>
#include <string>
#include <limits>


namespace crud{

struct Movies {
		int id_number;
		std::string actor_name;
		std::string title;
		std::string release_date;
	};

int getOption();
void checkDatabase(std::fstream &data);
void writeData(std::fstream &data, int position, Movies &inputMovies);
int getDataSize(std::fstream &data);
Movies readData(std::fstream &data, int position);
void addDataMovies(std::fstream &data);
void displayDataMovies(std::fstream &data);
void updateRecord(std::fstream &data);
void deleteRecord(std::fstream &data);
	
}