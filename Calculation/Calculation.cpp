#include "Calculation.h"


//コールバック関数
//void DisplayResult(int *answer ) {
//	//printf("%d秒待って実行されたよ\n", *s);
//	
//	int rndNumber = GetDiceNumber();
//
//
//	printf("さいころの値は%dだよ\n", rndNumber);
//	
//	if (rndNumber % 2 == 0 &&*answer%2==0) {
//		printf("正解!!\n");
//	}
//	else if (rndNumber % 2 == 1 &&*answer%2==1) {
//		printf("正解!!\n");
//	}
//	else {
//		printf("不正解・・\n");
//	}
//}
//
//void SetTimeout(PFunc p,int answer) {
//	printf("さて答えはなんだろな\n\n");
//	//Sleepは待つ処理
//	//引数はミリ秒だよ
//	Sleep(3 * 1000);
//
//	
//
//	p(&answer);
//}
//
////さいころ関数
//int GetDiceNumber() {
//	std::random_device rnd;
//	return rnd() % 6 + 1;
//}