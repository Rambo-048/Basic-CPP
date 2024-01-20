#include <iostream>
#include <fstream>
#include <string>
#include <limits>
#include "crud.h"


	int crud::getOption(){
		int input;
		system("clear");
		// system("cls");
		std::cout << "\nProgram CRUD Data Movies" << std::endl;
		std::cout << "=============================" << std::endl;
		std::cout << "1. Add Data Movies" << std::endl;
		std::cout << "2. Show Data Movies" << std::endl;
		std::cout << "3. Change Data Movies" << std::endl;
		std::cout << "4. Delete Data Movies" << std::endl;
		std::cout << "5. Finish" << std::endl;
		std::cout << "=============================" << std::endl;
		std::cout << "Choose [1-5]? : ";
		std::cin >> input;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
		return input;
	}


	void crud::writeData(std::fstream &data, int position, crud::Movies &inputMovies){
		data.seekp((position - 1)*sizeof(crud::Movies), std::ios::beg);
		data.write(reinterpret_cast<char*>(&inputMovies),sizeof(crud::Movies));
	}


	crud::Movies crud::readData(std::fstream &data, int position){
		crud::Movies readMovies;
		data.seekg((position - 1)*sizeof(crud::Movies),std::ios::beg);
		data.read(reinterpret_cast<char*>(&readMovies),sizeof(crud::Movies));
		return readMovies;
	}


	int crud::getDataSize(std::fstream &data){
		int start, end;
		data.seekg(0,std::ios::beg);
		start = data.tellg();
		data.seekg(0,std::ios::end);
		end = data.tellg();
		return (end-start)/sizeof(crud::Movies);
	}


	void crud::displayDataMovies(std::fstream &data){
		int size = crud::getDataSize(data);
		crud::Movies showMovies;
		std::cout << "no.\tid_number.\tActor_Name.\tTitle.\tRelease_Date." << std::endl;
		for(int i = 1; i <= size; i++){
			showMovies = crud::readData(data,i);
			std::cout << i << "\t";
			std::cout << showMovies.id_number << "\t";
			std::cout << showMovies.actor_name << "\t";
			std::cout << showMovies.title << "\t";
			std::cout << showMovies.release_date << std::endl;
		}
	}


	void crud::deleteRecord(std::fstream &data){
		int number,size,offset;
		crud::Movies blankMovies, tempMovies;
		std::fstream dataTemp;

		size = crud::getDataSize(data);
		// 1. choose number
		std::cout << "Delete number: ";
		std::cin >> number;
		// 2. insert with Empty Data (Void)
		crud::writeData(data,number,blankMovies);
		// 3. check data in file data.bin, if found data
		//    move data to temporary file
		dataTemp.open("temp.dat", std::ios::trunc|std::ios::out|std::ios::in|std::ios::binary);

		offset = 0;

		for (int i=1 ; i <=size ; i++){
			tempMovies = crud::readData(data,i);

			if (!tempMovies.title.empty()){
				crud::writeData(dataTemp,i - offset,tempMovies);
			} else {
				offset++;
				std::cout << "deleted item" << std::endl;
			}
		}
		// 4. move data from file Temp ke data.bin
		size = crud::getDataSize(dataTemp);
		data.close();
		data.open("data.bin",std::ios::trunc|std::ios::out|std::ios::binary);
		data.close();
		data.open("data.bin",std::ios::out|std::ios::in|std::ios::binary);

		for(int i = 1; i <= size; i++){
			tempMovies = crud::readData(dataTemp,i);
			crud::writeData(data,i,tempMovies);
		}
	}

	void crud::updateRecord(std::fstream &data){
		int number;
		crud::Movies updateMovies;
		std::cout << "Choose number: ";
		std::cin >> number;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');

		updateMovies = crud::readData(data,number);
		
		std::cout << "\n\nChoose Data: " << std::endl;
		std::cout << "Actor Name   : " << updateMovies.actor_name << std::endl;
		std::cout << "Title        : " << updateMovies.title << std::endl;
		std::cout << "Release Date : " << updateMovies.release_date << std::endl;

		std::cout << "\nChange Data: "<< std::endl;
		std::cout << "Actor Name:";
		std::getline(std::cin,updateMovies.actor_name);
		std::cout << "Title:";
		std::getline(std::cin,updateMovies.title);
		std::cout << "Release Date:";
		std::getline(std::cin,updateMovies.release_date);

		crud::writeData(data,number,updateMovies);
	}

	void crud::checkDatabase(std::fstream &data){
		data.open("data.bin", std::ios::out | std::ios::in | std::ios::binary);

		// check file exist or not
		if (data.is_open()){
			std::cout << "database found" << std::endl;
		} else {
			std::cout << "database not found, create new database" << std::endl;
			data.close();
			data.open("data.bin", std::ios::trunc | std::ios::out | std::ios::in | std::ios::binary);
		}
	}

	void crud::addDataMovies(std::fstream &data){
		
		Movies inputMovies, lastMovies;

		int size = crud::getDataSize(data);
		
		std::cout << "Data Size : " << size << std::endl;

		if(size == 0){
			inputMovies.id_number = 1;
		} else {
			lastMovies = crud::readData(data,size);
			std::cout << "id_number = " << lastMovies.id_number << std::endl;
			inputMovies.id_number = lastMovies.id_number + 1;
		}

		std::cout << "Actor Name: ";
		std::getline(std::cin, inputMovies.actor_name);
		std::cout << "Title: ";
		std::getline(std::cin, inputMovies.title);
		std::cout << "Release Date: ";
		std::getline(std::cin, inputMovies.release_date);

		crud::writeData(data,size+1,inputMovies);
	}