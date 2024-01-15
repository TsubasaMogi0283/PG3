#include "Calculation.h"
#include <iostream>

int Add(int a, int b) {
	int result = a + b;
	std::cout << result<<"\n";
	return result;
}

int Subtract(int a, int b) {
	return a - b;
}

int Multiply(int a, int b) {
	return a * b;
}

int Division(int a, int b) {
	return a / b;
}

