#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

#include "Calculation/Calculation.h"


int main() {

	//関数ポインタ
	//一言でいうと関数版のポインタ
	//宣言は変数と同じように関数の前に*をつけて()で括る

	//実行する関数を配列でまとめられて見やすくなるよ！！
	//ただ中身を入れ替えるとき分かりにくい
	//ここでtypedefを使う
	//typedef int (*newType)(int, int);

	//非同期処理の時に凄く便利になるよ
	//順番を保証できる
	//単体で使うことはあまりないらしい

	//newType calc;

	//int number1 = 5;
	//int number2 = 12;

#pragma region 配列版

	//typedef int (*newType[2])(int, int) = {
	//	Add,
	//	Subtract,
	//};

	//ここで中身を入れる
	//calc = Add;
	//printf("Add:%d\n", calc(number1,number2));
	//printf("Addのアドレス:%p\n",*calc);
	
	//ここで関数の切り替え
	//calc = Subtract;
	//printf("Subtrac:%d\n", calc(number1,number2));
	//printf("Subtractのアドレス=%p\n",*calc);

	//for (int i = 0; i < 2; i++) {
	//	printf("計算 : %d\n", calc[i](number1, number2));
	//	printf("アドレス : %p\n", *calc[i]);
	//
	//}
#pragma endregion

#pragma region typedef版
	//typedefで&をつけて少し分かりやすくなったよ
	//calc = &Add;
	//printf("%d\n", calc(number1, number2));
	//
	//calc = &Subtract;
	//printf("%d\n", calc(number1, number2));

#pragma endregion

#pragma region コールバック関数を使う
	//PFunc p;
	//p = DisplayResult;
	//SetTimeout(p, 3);
	//ちゃんと待ったね
#pragma endregion

	

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