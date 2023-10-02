#include <stdio.h>
#include "Recursive/Recursive.h"

int main() {

#pragma region 資料サンプル
	
	//int n = 6;
	//int result;
	//result = Recursive(n);
	//printf("%dの階乗=%d\n", n, result);

#pragma endregion

	int workingHour = 9;
	int hourlyWage = 1072;

	int normalWorking = 0;
	
	printf("%d時間働きます\n\n", workingHour);

	int recursive = Recursive(workingHour);
	
	//次は再帰
	
	normalWorking = hourlyWage * workingHour;
	printf("通常だと%d円\n", normalWorking);
	printf("再帰だと%d円\n", recursive);

	

	return 0;
}