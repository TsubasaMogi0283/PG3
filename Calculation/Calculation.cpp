#include "Calculation.h"

int Add(int a, int b) {
	return a + b;
}

int Subtract(int a, int b) {
	return a - b;
}

void DisplayResult(int* s) {
	printf("%d秒待って実行されたよ\n", *s);
}
