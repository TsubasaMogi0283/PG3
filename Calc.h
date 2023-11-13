#pragma once

template <typename Type1,typename Type2>

class Calc{

public:
	//()の中身は引数
	Calc(Type1 n1, Type2 n2) :number1(n1), number2(n2) {

	}


	//小さいほうを返す
	Type1 Min() {
		if (number1 < number2) {
			return number1;
		}
		else {
			return number2;
		}
	}


private:

	Type1 number1;
	Type2 number2;



};


