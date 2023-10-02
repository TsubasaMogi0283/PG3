#include <stdio.h>

#include "Add/Add.h"


int main() {

	
	//関数テンプレートの使い方
	//関数名<型>(引数)
	//%の後ろ気を付けてね
	printf("%d\n", Add<int,int>(5, 12));
	printf("%f\n", Add<float,float>(0.5f, 1.2f));

	//もちろん小数点以下は切り捨てで6になるはず
	//大丈夫でした
	printf("%d\n", Add<int, float>(5, 1.2f));


	return 0;
}