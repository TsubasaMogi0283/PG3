#include <stdio.h>

#include "Add/Add.h"
template <typename Type1>


//一般にはTypeがTで表記される
Type1 Add(Type1 number1, Type1 number2) {
	//static_castは消してね
	return (number1 + number2);
}


//floatのときだけ減算したい
//そんな時はテンプレートの特殊化(オーバーライド)

//ここで解除するよ

template <>

float Add<float>(float number1, float number2) {
	return (number1 - number2);
}


//何かオーバーライドはmain.cppでやらないとダメだった
//なんかここに書くの嫌っす


float Add(float number1, float number2) {
	return number1 * number2;
}



int main() {

	
	//関数テンプレートの使い方
	//関数名<型>(引数)
	//%の後ろ気を付けてね
	printf("%d\n", Add<int>(5, 12));
	printf("%f\n", Add<float>(0.5f, 1.2f));
	printf("%f\n", Add(0.5f, 0.12f));

	//もちろん小数点以下は切り捨てで6になるはず
	//大丈夫でした
	//printf("%d\n", Add<int, float>(5, 1.2f));


	return 0;
}