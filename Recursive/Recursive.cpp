#include "Recursive.h"

int CalcRecursiveSalary(int workingTime) {
	int salary = 0;
	
	//Å‰‚Í100‰~
	if (workingTime == 1) {
		return 100;
	}

	if (workingTime > 1) {
		int preSalary = CalcRecursiveSalary(workingTime-1);
		int currentSalary= (preSalary*2)-50;
		
		salary += currentSalary+preSalary;
		

	}
	
	return salary;
}
