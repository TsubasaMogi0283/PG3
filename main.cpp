#include <stdio.h>
#include <string>
#include <chrono>
#include <iostream>

int main() {

#pragma region Explanation
	//左辺値 = 右辺値
	int i = 1;
	
	//辺(式)はオペランド



	//左辺値
	//メモリ上の特定の場所を参照する

	//右辺値
	//一時的に生成された値や、オブジェクトの初期化に使用される値などである。


	//右辺にあるから右辺値とは限らない
	//すぐに消えるか消えないかの違いかな


	//長所
	//コピーではなく移動が出来る
	//余計な処理をしなくて済むよ！！
	//ただ「移動」だから元のデータにはアクセス出来なくなるよ


	//std::move()で右辺値から左辺値にキャスト出来るよ

#pragma endregion


	std::chrono::steady_clock::time_point now = std::chrono::steady_clock::now();
	//10万文字の初期化の宣言はこうやってやるよ！
	std::string a(100000, 'a');
	
	std::string a2 = a;
	//現在の時間
	std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();

	auto result= std::chrono::duration_cast<std::chrono::microseconds>(end - now).count();

	std::cout<< result<<"\n";
	

	return 0;
}