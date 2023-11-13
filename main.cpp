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

	Calc<int >comperInt1(10, 20);
	Calc<int >comperInt2(20, 15);

	Calc<float>comperFloat1(5.0f, 12.0f);
	Calc<float>comperFloat2(20.0f, 57.0f);
	
	Calc<double>comperDouble1(3.9, 0.5);
	Calc<double>comperDouble2(0.7, 1.2);


	printf("int型で比較: %d\n", comperInt1.Min());
	printf("int型で比較: %d\n", comperInt2.Min());

	printf("float型で比較: %f\n", comperFloat1.Min());
	printf("float型で比較: %f\n", comperFloat2.Min());

	printf("doubleがたで比較: %f\n", comperDouble1.Min());
	printf("doubleがたで比較: %f\n", comperDouble2.Min());

	return 0;
}