/*
 * Egor Danilov
 * st141853@student.spbu.ru
 * My home assignment 2a
 */

#include "main.h"
#include <string>
#include <iostream>

int calculateValue() {
	std::string input;
	char tempChar;

	std::cout << "Enter a mathematical expression in Reverse Polish Notation: " << std::endl;
	std::getline(std::cin, input);
	const int size_of_input = input.length();
	int* stack = new int[size_of_input];
	int top = -1;

	for (int i = 0; i < size_of_input; i++) {
		tempChar = input[i];
		if (tempChar == ' ') {continue;}

		if (tempChar >= '0' && tempChar <= '9') {
			int number = 0;
			while (i < size_of_input && input[i] >= '0' && input[i] <= '9') {
				tempChar = input[i];
				number = number * 10;
				number = number + (tempChar - '0');
				i += 1;
			}
			top += 1;
			stack[top] = number; //put number in the stack
		}
		else {
			if (tempChar == '+') {stack[top-1] = stack[top-1] + stack[top];}
			if (tempChar == '-') {stack[top-1] = stack[top-1] - stack[top];}
			if (tempChar == '*') {stack[top-1] = stack[top-1] * stack[top];}
			if (tempChar == '/') {stack[top-1] = stack[top-1] / stack[top];}
			top -= 1;
		}
	}

	int value = stack[top];
	delete[] stack;
	std::cout << value << std::endl;
	return value;
}
