#include "Calculation.h"

int Add(int a, int b) {
	return a + b;
}

int Subtract(int a, int b) {
	return a - b;
}



//��������֐�
int GetDiceNumber() {
	std::random_device rnd;
	return rnd() % 6 + 1;
}