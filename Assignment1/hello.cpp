/*
 * Egor Danilov
 * st141853@student.spbu.ru
 * My home assignment 1
 */
#include "hello.h"
#include <iostream>

void hello() {
	std::string helloString;
	std::cout << "Hello, world!" << std::endl;
	while (1) {
	std::getline(std::cin, helloString);
	std::cout << "Hello, " << helloString << std::endl;
	}
}

