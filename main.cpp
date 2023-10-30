#include <stdio.h>
#include "Template.h"

int main() {

	
	Template<int >b1(10, 20);
	Template<double>b2(1.2, 3.4);


	printf("面積: %d\n", b1.Size());
	printf("面積: %f\n", b2.Size());


	return 0;
}