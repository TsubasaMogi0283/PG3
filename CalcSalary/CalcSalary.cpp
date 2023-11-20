#include "CalcSalary.h"

//通常
int CalcNormalSalary(int baseSalary, int workingTime) {
	return baseSalary * workingTime;
}

//階乗
int CalcRecursiveSalary(int firstSalary,int workingTime) {
	
	if (workingTime == 1) {
		return firstSalary;
	}


	return firstSalary+CalcRecursiveSalary(firstSalary*2-50,workingTime-1);
	
}
