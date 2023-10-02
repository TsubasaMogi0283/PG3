#include <stdio.h>

template <typename Type1>


//一般にはTypeがTで表記される
//Typeで分かりやすくしよう
Type1 Min(Type1 number1, Type1 number2) {
	
	if (number1 < number2) {
		return number1;
	}
	if (number2 < number1) {
		return number2;
	}

}

template <>


char Min<char>(char char1,char char2){
	
	printf("数字以外は代入できません");
	return 0;
}



int main() {

	
	//関数テンプレートの使い方
	//関数名<型>(引数)
	//%の後ろ気を付けてね
	printf("%d\n", Min<int>(12, 5));
	printf("%f\n", Min<float>(0.5f, 1.2f));
	printf("%lf\n", Min<double>(0.00005, 0.0000012));
	Min<char>(1,2);


	return 0;
}

