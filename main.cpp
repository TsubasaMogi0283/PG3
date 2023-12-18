#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

#include "Calculation/Calculation.h"


int main() {

	

	printf("さいころを振って奇数か偶数を当てるゲーム\n\n");
	printf("奇数だと思うなら1\n");
	printf("偶数だと思うなら2を押してね\n");


	int answer = 0;
	scanf_s("%d",&answer);
	

	PFunc wait;
	wait = DisplayResult;
	//答えがGetDiceNumber
	SetTimeout(wait,answer);

	


	return 0;
}