#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

//関数ポインタ
//このままだとただの入れ物
//書き方・・・型(*---)(引数)
//これは戻り値の無いvoid型の、引数無しの変数pFuncが入っているよ
void (*pFunc)();


void PrintHelloWorld(){
	printf("HelloWorld");
}
void PrintfGoodByeWorld() {
	printf("GoodByeWorld");
}




//役立つこと
int Addition(int a, int b) {
	return a + b;
}
int Sunbtract(int a, int b) {
	return a - b;
}
int Multiply(int a, int b) {
	return a * b;
}
int Division(int a, int b) {
	return a / b;
}


//上の四則計算をまとめて実行出来るよ
int (*culculationArr[4])(int, int) = {
	Addition,
	Sunbtract,
	Multiply,
	Division,

};


//短所
//中身を入れるところが変数の場合と変わらないので分かりずらい
//そこでtypedefを使う

//typedef・・・型の名前を変えるときに使う
//uintって書くとしっかり出るよ
typedef unsigned int uint;

typedef void (*pNewFunc)();
void NewPrintHelloWorld(){
	printf("HelloWorld");
}
void NewPrintfGoodByeWorld() {
	printf("GoodByeWorld");
}



//コールバック関数
//ある関数の引数に入れる関数のこと
//javascriptではそれ専用の関数あるけどc++は無いので作ろう
//関数ポインタで簡単に作れるよ

typedef void (*pCallBack)(int*);

//中身が変わらない系計算じゃないやつはコールバック関数になりがち
void DisplayResult(int* s) {
	printf("%d秒待って実行されたよ\n", *s);
}
void SetTimeout(pCallBack p, int second) {
	Sleep(second * 1000);
	
	p(&second);
}


int main() {
	//中身を入れてあげよう
	pFunc = PrintHelloWorld;
	printf("PrintHelloWorldのアドレス =%p\n", PrintHelloWorld);
	//現在入っているものを表示
	printf("pFuncの内容=%p\n\n", *pFunc);


	//切り替え
	pFunc = PrintfGoodByeWorld;
	printf("PrintfGoodByeWorldの内容=%p\n", PrintfGoodByeWorld);
	printf("pFuncの内容=%p\n\n", *pFunc);


	for (int i = 0; i < 4; i++) {
		printf("%d\n", culculationArr[i](283,39));
	}


	//インスタンスみたいなやつを作る。
	pNewFunc type;

	//中身を入れてあげよう
	type = &NewPrintHelloWorld;
	printf("PrintHelloWorldのアドレス =%p\n", NewPrintHelloWorld);
	//現在入っているものを表示
	printf("pFuncの内容=%p\n\n", type);


	//切り替え
	type = &NewPrintfGoodByeWorld;
	printf("PrintfGoodByeWorldの内容=%p\n", NewPrintfGoodByeWorld);
	printf("pFuncの内容=%p\n\n", type);


	//コールバック関数
	//ある関数の引数に入れる関数のこと
	//javascriptではそれ専用の関数あるけどc++は無いので作ろう
	//関数ポインタで作れるよ
	printf("CallBack Practice Start!!\n\n");
	pCallBack p;
	p = &DisplayResult;
	SetTimeout(p, 3);


	return 0;
}