#include "Enemy.h"

//作り方が特殊すぎるのでしっかり覚えてね
void(Enemy::* Enemy::pFucTable[])() = {
	//列挙型見たいな感じ
	&Enemy::Aproach,
	&Enemy::Attack,
	&Enemy::Leave,
};

Enemy::Enemy(){

}

void Enemy::Initialize(){


}

void Enemy::Aproach(){
	printf("接近\n");
}

void Enemy::Attack(){
	printf("攻撃\n");
}

void Enemy::Leave(){
	printf("離脱\n");
}

void Enemy::Update(){
	//メンバ関数ポインタに入っている関数を呼び出す
	for (int i = 0; i < 3; i++) {
		(this->*pFucTable[i])();
	}
	
}

Enemy::~Enemy(){

}
