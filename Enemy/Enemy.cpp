#include "Enemy.h"





//メンバ関数ポインタ
void (Enemy::* spFunctable[])() = {
	&Enemy::Proximity,
	&Enemy::Attack,
	&Enemy::Leave,


};

//近接
void Enemy::Proximity() {

}

//射撃
void Enemy::Attack() {

}

//離脱
void Enemy::Leave() {

}

//更新
void Enemy::Update() {
	//現在フェーズの関数を実行
	//メンバ関数ポインタに入っている関数を呼び出す
	//ここではAppriachUpdate
	(this->*spFunctable[static_cast<size_t>(phase_)])();


	//行列を更新

	//デバッグ用表示

}



