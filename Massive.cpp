#include "Massive.h"
#include <iostream>

//コンストラクタ
Massive::Massive() {
	
}



void Massive::Explain() {
	name_ = "Massive";
	std::cout  <<name_  << "\n";


	std::cout << "NativeInstrumentのシンセサイザー"   << "\n";
	std::cout << "ベース系の音はこれにお任せ！！"   << "\n\n";

}



//デストラクタ
Massive::~Massive() {

}