//#include "Enemy.h"
//#include <stdio.h>
//
//
//Enemy::Enemy() {
//
//}
//
//void Enemy::Initialze() {
//	phase_ = Phase::Approach;
//}
//
////メンバ関数ポインタ
//void (Enemy::* Enemy::spFunctable[])() = {
//	//それぞれの関数
//	&Enemy::Approach,
//	&Enemy::Attack,
//	&Enemy::Leave,
//
//
//};
//
////近接
//void Enemy::Approach() {
//	printf("近接\n");
//	//Sleep(3 * 1000);
//	phase_ = Phase::Attack;
//}
//
////射撃
//void Enemy::Attack() {
//	printf("射撃\n");
//	//Sleep(3 * 1000);
//	phase_ = Phase::Leave;
//
//}
//
////離脱
//void Enemy::Leave() {
//	printf("離脱\n");
//}
//
////更新
//void Enemy::Update() {
//	//ループしないから気を付けて
//	//for文じゃないとキツイっす
//
//	//現在フェーズの関数を実行
//	//メンバ関数ポインタに入っている関数を呼び出す
//	for (int i = 0; i < 3; i++) {
//		(this->*spFunctable[static_cast<size_t>(phase_)])();
//	}
//	
//}
//
//Enemy::~Enemy() {
//
//}
//
