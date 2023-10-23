#include <stdio.h>
#include "Recursive/Recursive.h"

int main() {

#pragma region 資料サンプル
	
	//int n = 6;
	//int result;
	//result = Recursive(n);
	//printf("%dの階乗=%d\n", n, result);

#pragma endregion

	int workingHour = 1;
	int hourlyWage = 1072;

	
	//printf("%d時間働きます\n\n", workingHour);


	int normalSalary = 0;
	
	int recursive = 0;

	
	
	

	
	for (int i = 1; i < 6; i++) {
		//通常
		normalSalary = hourlyWage * workingHour;
		
		//再帰
		recursive = CalcRecursiveSalary(workingHour);

		printf("%d時間", i);
		printf("通常だと%d円\n", normalSalary);
		printf("再帰だと%d円\n\n", recursive);

		if (recursive < normalSalary) {
			
			workingHour++;
		}
		if (recursive > normalSalary) {
			printf("再帰的な賃金が超えました\n");
		}
	}

	printf("よって5時間である\n");
	
	


	return 0;
}