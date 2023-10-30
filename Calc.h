#pragma once

template <typename Type>

class Calc{

public:
	//()の中身は引数
	Calc(Type n1, Type n2) :number1(n1), number2(n2) {

	}


	//小さいほうを返す
	Type Min() {
		if (number1 < number2) {
			return number1;
		}
		else {
			return number2;
		}
	}


private:

	Type number1;
	Type number2;



};


