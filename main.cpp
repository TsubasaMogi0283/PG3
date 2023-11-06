#include <stdio.h>
#include "CalcSalary/CalcSalary.h"

int main() {

#pragma region 資料サンプル
	
	//int n = 6;
	//int result;
	//result = Recursive(n);
	//printf("%dの階乗=%d\n", n, result);

#pragma endregion

	int workingTime = 1;
	int hourlyWage = 1072;

	
	//printf("%d時間働きます\n\n", workingHour);


	int normalSalary = 0;
	
	int recursiveSalary = 0;

	
	
	

	
	for (int i = 1; i < 10; i++) {
		//通常
		normalSalary = hourlyWage * workingTime;
		
		//再帰
		recursiveSalary = CalcRecursiveSalary(100,workingTime);

		printf("%d時間", i);
		printf("通常だと%d円\n", normalSalary);
		printf("再帰だと%d円\n\n", recursiveSalary);

		if (recursiveSalary < normalSalary) {
			
			workingTime++;
		}
		if (recursiveSalary > normalSalary) {
			printf("再帰的な賃金が超えました\n");
			break;
		}
	}


	printf("よって8時間である\n");
	
	


	return 0;
}