#pragma once

//関数テンプレート
//型が変わっても同じ挙動をするようにした関数のこと

//多重定義と少し違う。抽象的(テンプレ)か具体的(多重)か
//詳しくは資料で

//ここでテンプレート型を定義
//後でint,floatに置き換えられるよ
//template <typename Type>


////一般にはTypeがTで表記される
//Type1 Add(Type number1, Type number2) {
//	return static_cast<Type1 typename1,Type2 typename2>(number1 + number2);
//}




template <typename Type1,typename Type2>


//一般にはTypeがTで表記される
Type1 Add(Type1 number1, Type2 number2) {
	return (number1 + number2);
}