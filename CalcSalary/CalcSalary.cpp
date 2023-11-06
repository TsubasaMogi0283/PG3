#include "CalcSalary.h"

int CalcRecursiveSalary(int firstSalary,int workingTime) {
	

	//最初は100円
	if (workingTime == 1) {
		return firstSalary;
	}

	if (workingTime > 1) {
		
		return firstSalary+CalcRecursiveSalary(firstSalary*2-50,workingTime-1);
		

	}
	
	
}
