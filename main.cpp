#include <stdio.h>
#include "Recursive/Recursive.h"

int main() {

	int n = 6;
	int result;
	result = Recursive(n);
	printf("%dの階乗=%d\n", n, result);




	return 0;
}