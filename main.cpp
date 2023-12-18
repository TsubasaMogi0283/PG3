#include <stdio.h>

#include "Template/Template.h"
#include "Calc/Calc.h"

int main() {

	Template<int > a(5, 12);
	Template<float> b(3.0f, 9.0f);

	printf("%d\n", a.Add());
	printf("%f\n\n\n", b.Add());
	


	Calc<int,int> A(5, 12);
	Calc<int, float>B(3, 9.0f);

	printf("%d\n", A.Min());
	printf("%d\n", B.Min());

	
	return 0;
}