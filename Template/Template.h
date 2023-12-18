#pragma once

//クラステンプレート
//と言っても。型が全部汎用的に使えるものにするだけ。だと思う。

template<typename Type>
class Template{
public:
	

	//メンバ変数(引数)
	Template(Type a, Type b) :a_(a), b_(b) {};

	Type Add() {
		return static_cast<Type>(a_ + b_);
	}

public:

	Type a_;
	Type b_;


};


