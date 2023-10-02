#include "Recursive.h"

int Recursive(int workingTime) {
	//if (n <= 1) {
	//	return 1;
	//}
	//return (n * Recursive(n - 1));


	if (workingTime == 1) {
		return 100;
	}

	if (workingTime > 1) {
		return Recursive(workingTime-1)*2-50;;
	}
	
	
}
