/*
 * Egor Danilov
 * st141853@student.spbu.ru
 * My home assignment 2a
 */

#include "calculateValue.h"
#include <string>
#include <iostream>

int calculateValue() {
	std::string input;
	char tempChar;

	std::cout << "Enter a mathematical expression in Reverse Polish Notation: " << std::endl;
	std::getline(std::cin, input);
	const int size_of_input = input.length();
	float* stack = new float[size_of_input];
	int top = -1;

	for (int i = 0; i < size_of_input; i++) {
		tempChar = input[i];
		if (tempChar == ' ') {continue;}

		if (tempChar >= '0' && tempChar <= '9') {
			float number = 0;
			float fractionalPart = 0;
			float multiplier = 1;
			while (i < size_of_input && input[i] >= '0' && input[i] <= '9') {
				tempChar = input[i];
				number = number * 10;
				number = number + (tempChar - '0');
				i += 1;
			}
			top += 1;

			if (input[i] == '.' || input[i] == ',') {
				while (i+1 < size_of_input && input[i+1] >= '0' && input[i+1] <= '9') {
					tempChar = input[i+1];
					fractionalPart += (tempChar - '0');
					multiplier *= 0.1;
					i += 1;
				}
			}
			stack[top] = number + fractionalPart * multiplier; //put number in the stack
			continue;
		}
		else {
			if (tempChar == '+') {stack[top-1] = stack[top-1] + stack[top];}
			if (tempChar == '-') {stack[top-1] = stack[top-1] - stack[top];}
			if (tempChar == '*') {stack[top-1] = stack[top-1] * stack[top];}
			if (tempChar == '/') {stack[top-1] = stack[top-1] / stack[top];}
			top -= 1;
		}
	}

	float value = stack[top];
	delete[] stack;
	std::cout << value << std::endl;
	return value;
}
