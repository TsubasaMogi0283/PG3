#pragma once
#include <stdio.h>

template <typename Type1,typename Type2>
class Calc{

public:
	Calc(Type1 num1, Type2 num2) :num1_(num1), num2_(num2) {};

	Type1 Min() {
		if (num1_ < num2_) {
			return num1_;
		}

		if (num1_ > num2_) {
			return num2_;
		}
		if (num1_ == num2_) {
			printf("Equal");
			return 0;
		}

	}

public:
	Type1 num1_;
	Type2 num2_;



};

