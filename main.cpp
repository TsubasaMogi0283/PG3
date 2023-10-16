#include <stdio.h>

void PrintfHelloWorld(void) {
	printf("HelloWprld\n");
}



int main() {

	//関数ポインタ
	//一言でいうと関数版のポインタ
	printf("main=%p\n", main);


	//宣言は変数と同じように関数の前に*をつけて()で括る
	void (*pfunc) ();

	//ここで中身を入れる
	pfunc = PrintfHelloWorld;
	printf("PrintfHelloWorldのアドレス=%p\n", PrintfHelloWorld);
	printf("pfuncの内容=%p\n",*pfunc);

	return 0;
}