#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

#include "Calculation/Calculation.h"
#include <functional>


int main() {

	//ラムダ式(無名関数)
	//宣言・定義が必要ない関数
	//肥大化しないよのがメリット
	//[]...ラムダキャプチャ
	//()...パラメータ定義説節いわゆる「引数」
	//{}...複合ステートメント。関数定義
	//()...一番後ろに呼び出し式の()を忘れずに
	
	//std::function
	//関数を変数化出来る型。関数ポインタの次世代版
	//autoと同じだけどできるだけこっちにしよう

	printf("さいころを振って奇数か偶数を当てるゲーム\n\n");
	printf("奇数だと思うなら1\n");
	printf("偶数だと思うなら2を押してね\n");


	int rollResult;
	int answer = 0;
	scanf_s("%d",&answer);
	
	
	//さいころをふる
	std::function<int()> DiseRoll = []() {
		int rndNumber = GetDiceNumber();


		printf("さいころの値は%dだよ\n", rndNumber);
		return rndNumber;
		
	};
	printf("%dだね\n", answer);
	rollResult = SetTimeout(DiseRoll, 3);
	JudgeResult(rollResult,answer);

	

	

	return 0;
}