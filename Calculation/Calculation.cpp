#include "Calculation.h"

int Add(int a, int b) {
	return a + b;
}

int Subtract(int a, int b) {
	return a - b;
}

//コールバック関数
void JudgeResult(int rollResult,int answer ) {
	//printf("%d秒待って実行されたよ\n", *s);
	
	

	if (rollResult % 2 == 0 && answer %2==0) {
		printf("正解\n");
	}
	if (rollResult % 2 == 1 && answer%2== 1) {
		printf("正解\n");
	}
	if (rollResult % 2 == 1 && answer%2== 0){
		printf("不正解\n");
	}
	if (rollResult % 2 == 0 && answer%2== 1){
		printf("不正解\n");
	}
	
}

int SetTimeout(std::function<int()> callback,int answer) {
	printf("さて答えはなんだろな\n");
	//Sleepは待つ処理
	//引数はミリ秒だよ
	Sleep(answer * 1000);

	
	return callback();
}

//さいころ関数
int GetDiceNumber() {
	std::random_device rnd;
	return rnd() % 6 + 1;
}