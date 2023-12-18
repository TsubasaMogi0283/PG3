#pragma once

//クラステンプレート
//と言っても。型が全部汎用的に使えるものにするだけ。だと思う。

template<typename Type>
class Template{
public:
	Type Template(Type a, Type b) :a(a), b(b) {
	}

	Type Add() {
		return static_cast<Type>(a + b);
	}



	
public:
	Type a;
	Type b;




};

