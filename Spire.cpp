#include "Spire.h"
#include <iostream>

//コンストラクタ
Spire::Spire() {

}


//説明
void Spire::Explain() {
	name_ = "Spire";
	std::cout  <<name_  << "\n";
	

	std::cout << "RevealSoundのシンセサイザー"   << "\n";
	std::cout << "矢印に従えば良い音が作れる"   << "\n";
	std::cout << "バラエティ豊富な音色が特徴"   << "\n\n";


}



//デストラクタ
Spire::~Spire() {

}
