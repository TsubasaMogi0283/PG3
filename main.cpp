#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

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
	int num = 10;


	//キャプチャでラムダ式の外にある変数を内部に取り込むことが出来る
	auto fx = [=](int i) {
		return num + i;
	};
	
	//std::function...関数を変数にさせるもの。autoみたいなやつ
	//autoよりstd::functionで作った方が良いらしい
	std::function<int(int)> fxFunctional = [](int i) {
		return i + 1; 
	};
	
	auto fxFunctional2 = [](int i) {
		return i + 1; 
	};

	printf("%d\n\n", fx(2));

	printf("%d\n", fxFunctional(2));
	printf("%d\n", fxFunctional2(2));


	return 0;
}