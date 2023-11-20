#include <stdio.h>
#include "CalcSalary/CalcSalary.h"

int main() {



	int workingTime = 1;
	int hourlyWage = 1072;

	

	int normalSalary = 0;
	int recursiveSalary = 0;

	
	
	

	
	for (int i = 1; i < 10; i++) {
		//通常
		normalSalary =CalcNormalSalary(hourlyWage,workingTime);
		
		//再帰
		recursiveSalary = CalcRecursiveSalary(100,workingTime);

		printf("%d時間\n", i);
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