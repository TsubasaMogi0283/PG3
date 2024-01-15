#include <stdio.h>
#include <thread>
#include "Calculation/Calculation.h"
#include "DisplayText/DisplayText.h"

//int Add(int a, int b) {
//	return a + b;
//}

int main() {

	//シングルスレッド
	//処理系が1つ

	//マルチスレッド
	//処理系が複数
	//データ通信の時こっちが良い。
	//今までのゲーム制作では1個しか使っていないのでもったいない。
	//ロードとセーブにめっちゃ役に立つ!!!!!!

	//鉄道、道路だと分かりやすいかも
	//シングルスレッドの方が...ローカル線とか、うちの前の一方通行の道
	//マルチスレッド...複線、複々線。首都圏に多いやつ。国道など一方通行じゃないやつ。


	//Sleep関数は基本使わないでね
	//joinで制御してね

#pragma region 練習
	//int num[3] = {1,2,3};

	//マルチスレッド
	//std::thread スレッド名(関数名,引数)
	////1つ目
	//std::thread th1(Add, num[0],num[1]);
	//th1.join();

	////2つ目
	//std::thread th2(Add, num[1],num[2]);
	//th2.join();

	////3つ目
	//std::thread th3(Add, num[2],num[0]);
	//th3.join();

	//異常なし!!

#pragma endregion

	const char* threadName[3] = { "thread1","thread2","thread3" };
	
	//1つ目
	std::thread th1(DisplayText, threadName[0]);
	th1.join();

	//2つ目
	std::thread th2(DisplayText, threadName[1]);
	th2.join();

	//3つ目
	std::thread th3(DisplayText, threadName[2]);
	th3.join();

	return 0;
}