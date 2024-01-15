#include <stdio.h>
#include <thread>

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
	int num[3] = {1,2,3};

	//マルチスレッド
	std::thread th1(num[0],num[0])

	return 0;
}