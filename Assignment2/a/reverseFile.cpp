/*
 * Egor Danilov
 * st141853@student.spbu.ru
 * My home assignment 2a
 */


#include "main.h"
#include <fstream>
#include <filesystem>
#include <string>
#include <iostream>

int reverseFile() {
	int size_of_file;
	std::string sourcePath; // sets an input file path
	std::string outputPath; // sets an output file path
	
	std::cout << "Enter path to an input file (or press Enter to set it as default: source.pdf" << std::endl;
	std::getline(std::cin, sourcePath);
	if (sourcePath == "") {
	sourcePath = "source.pdf";
	}

	std::cout << "Enter path to an output file (or press Enter to set it as default: temppdf.pdf" << std::endl;
        std::getline(std::cin, outputPath);
        if (outputPath == "") {
        outputPath = "temppdf.pdf";
        }


	std::ifstream infile;
	infile.open(sourcePath, std::ios::binary|std::ios::in);

	size_of_file = std::filesystem::file_size(sourcePath);
	char* buffer = new char[size_of_file];

	std::ofstream outfile;
	outfile.open(outputPath, std::ios::binary|std::ios::out);
	infile.read(buffer, size_of_file);
	reverseArray(buffer, size_of_file);
	outfile.write(buffer, size_of_file);

	infile.close();
	outfile.close();
	delete[] buffer;

	return 0;
}

int reverseArray(char* array, int size_of_array) {
	char tempValue;
	for (int i=0; i < size_of_array / 2; i++) {
		tempValue = array[i];
		array[i] = array[size_of_array - 1 - i];
		array[size_of_array - 1 - i] = tempValue;
	}
	return 0;
}


