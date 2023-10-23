#include <stdio.h>
#include "Recursive/Recursive.h"

int main() {

#pragma region 資料サンプル
	
	//int n = 6;
	//int result;
	//result = Recursive(n);
	//printf("%dの階乗=%d\n", n, result);

#pragma endregion

	int workingHour = 5;
	int hourlyWage = 1072;

	
	printf("%d時間働きます\n\n", workingHour);


	int normalSalary = 0;
	
	int recursive = 0;

	
	//通常
	normalSalary = hourlyWage * workingHour;
	
	//再帰
	recursive = CalcRecursive(workingHour);
	
	
	
	printf("通常だと%d円\n", normalSalary);
	printf("再帰だと%d円\n", recursive);

	workingHour++;

	return 0;
}