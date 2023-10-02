#include "Recursive.h"

int Recursive(int n) {
	if (n <= 1) {
		return 1;
	}
	return (n * Recursive(n - 1));
}