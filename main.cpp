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


	int answer = 0;
	scanf_s("%d",&answer);
	

	
	//答えがGetDiceNumber
	//SetTimeout(wait,answer);



#pragma region ラムダ式とstd::function
	////この2つは同じ
	//std::function<int(int)> fx = [](int i) {
	//	return i + 1;
	//};
	//auto fx2 = [](int i) {
	//	return i + 1;
	//};
	//printf("std:%d\n", fx(1));
	//printf("auto:%d\n", fx(1));

#pragma endregion


	
	//
	//PFunc wait;
	//wait = DisplayResult(answer);


	std::function<void()> SetTimeout = []() {
		printf("さて答えはなんだろな\n\n");
		//Sleepは待つ処理
		//引数はミリ秒だよ
		Sleep(3 * 1000);
		//p(&answer);
	};


	SetTimeout();

	//void DisplayResult(int *answer );
	std::function<void(int)> DisplayResult = [](int answer) {
		//printf("%d秒待って実行されたよ\n", *s);
	
		int rndNumber = GetDiceNumber();
	
	
		printf("さいころの値は%dだよ\n", rndNumber);
		
		if (rndNumber % 2 == 0 && answer%2==0) {
			printf("正解!!\n");
		}
		else if (rndNumber % 2 == 1 && answer%2==1) {
			printf("正解!!\n");
		}
		else {
			printf("不正解・・\n");
		}
	};

	DisplayResult(answer);

	return 0;
}