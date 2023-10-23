#include "Enemy.h"
#include <stdio.h>


Enemy::Enemy() {

}

void Enemy::Initialze() {
	phase_ = Phase::Proximity;
}

//メンバ関数ポインタ
void (Enemy::* Enemy::spFunctable[])() = {
	//それぞれの関数
	&Enemy::Proximity,
	&Enemy::Attack,
	&Enemy::Leave,


};

//近接
void Enemy::Proximity() {
	printf("近接");
	//Sleep(3 * 1000);
	//phase_ = Phase::Attack;
}

//射撃
void Enemy::Attack() {
	printf("射撃");
	//Sleep(3 * 1000);
	//phase_ = Phase::Leave;

}

//離脱
void Enemy::Leave() {
	printf("離脱");
}

//更新
void Enemy::Update() {
	//ループしないから気を付けて

	//現在フェーズの関数を実行
	//メンバ関数ポインタに入っている関数を呼び出す
	(this->*spFunctable[static_cast<size_t>(phase_)])();
	//Sleep(3 * 1000);
	phase_ = Phase::Attack;
}

Enemy::~Enemy() {

}

