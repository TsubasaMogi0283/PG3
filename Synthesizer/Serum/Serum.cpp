#include "Serum.h"

#include <iostream>

//コンストラクタ
Serum::Serum() {
	
}



void Serum::Explain() {
	name_ = "Serum";
	std::cout  <<name_  << "\n";


	std::cout << "XFER RECORDSのシンセサイザー"   << "\n";
	std::cout << "ウェーブテーブル型で波形の動きが分かりやすい"   << "\n";
	std::cout << "個人的にはこれが一番使いやすいと思う"   << "\n\n";

}



//デストラクタ
Serum::~Serum() {

}