#include <stdio.h>
#include "Template.h"
#include "Calc.h"

int main() {

#pragma region サンプル
	//Template<int >b1(10, 20);
	//Template<double>b2(1.2, 3.4);
	//
	//
	//printf("面積: %d\n", b1.Size());
	//printf("面積: %f\n", b2.Size());

#pragma endregion 

	//本編はここから

	Calc<int >comper1(10, 20);
	Calc<float>comper2(5.0f, 12.0f);
	Calc<double>comper3(3.9, 0.5);

	printf("int型で比較: %d\n", comper1.Min());
	printf("float型で比較: %f\n", comper2.Min());
	printf("doubleがたで比較: %f\n", comper3.Min());


	return 0;
}