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

	//ダブり厳禁
	Calc<int, int>comperVal1(10, 20);
	Calc<int, float>comperVal2(20, 15.0f);
	Calc<int, double>comperVal3(25, 57.0);
	
	Calc<float, float>comperVal4(20.0f, 15.0f);
	Calc<float, double>comperVal5(20.0f, 57.0);
	
	Calc<double, double>comperVal6(25.0, 63.0);
	

	printf("int型とint型で比較: %d\n", comperVal1.Min());
	printf("int型とfloat型で比較: %d\n", comperVal2.Min());
	printf("int型とdouble型で比較: %d\n", comperVal3.Min());

	printf("float型とfloat型で比較: %f\n", comperVal4.Min());
	printf("float型とdouble型で比較: %f\n", comperVal5.Min());

	printf("double型とdouble型で比較: %f\n", comperVal6.Min());

	return 0;
}