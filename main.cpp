#include <stdio.h>


#pragma region 多重定義

//C++では同じ関数名を定義することが出来るよ
//関数らへんを指すと上下のマークが出てくるよ。そうであれば多重定義が出来ているよ
//シグネチャ(呼び出し情報)・・・関数名と引数の数の組み合わせ
int Add(int a, int b) {
	return a + b;
}

//float Add(float d, float e) {
//	return d + e + 10;
//}

#pragma endregion


#pragma region 関数テンプレート
//typenameは型を何の形でも大丈夫なようにするやつ。簡単に言うと。
//TypeをTと略す場合が多いけど分かりにくいので自分はしっかり全部書く
template <typename Type1>
Type1 Add(Type1 a, Type1 b) {
	//引数の形に合わせたいのでキャストしよう
	return  static_cast<Type1>(a + b);
}

//特殊な場合(オーバーロード)
//ex)floatの時だけ減算の処理をしたい時など。
//テンプレートを解除することで出来るよ
//<>の中身を消せばいいよ
template<>
float Add<float>(float a, float b) {
	return a - b;
}


//多重定義も可能！
//通常の場合とあまり変わらないね
float Add(float a, float b) {
	return a * b;
}

#pragma endregion




int main() {
	
#pragma region 多重定義
	int num1 = 5;
	int num2 = 12;

	float num3 = 7.0f;
	float num4 = 30.0f;

	printf("%d\n", Add(num1,num2));
	//printf("%f\n\n", Add(num3, num4));

#pragma endregion

	//基本は「関数名<型>(引数)」で使う

	printf("%d\n", Add<int>(283, 39));
	printf("%f\n", Add<float>(2.83f, 3.9f));

	printf("%f\n", Add(28.3f, 3.9f));

	return 0;
}

