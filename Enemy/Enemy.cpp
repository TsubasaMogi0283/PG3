#include "Enemy.h"
#include <stdio.h>


Enemy::Enemy() {

}

void Enemy::Initialze() {
	phase_ = Phase::Proximity;
}

//�����o�֐��|�C���^
void (Enemy::* Enemy::spFunctable[])() = {
	//���ꂼ��̊֐�
	&Enemy::Proximity,
	&Enemy::Attack,
	&Enemy::Leave,


};

//�ߐ�
void Enemy::Proximity() {
	printf("�ߐ�");
	//Sleep(3 * 1000);
	//phase_ = Phase::Attack;
}

//�ˌ�
void Enemy::Attack() {
	printf("�ˌ�");
	//Sleep(3 * 1000);
	//phase_ = Phase::Leave;

}

//���E
void Enemy::Leave() {
	printf("���E");
}

//�X�V
void Enemy::Update() {
	//���[�v���Ȃ�����C��t����

	//���݃t�F�[�Y�̊֐������s
	//�����o�֐��|�C���^�ɓ����Ă���֐����Ăяo��
	(this->*spFunctable[static_cast<size_t>(phase_)])();
	//Sleep(3 * 1000);
	phase_ = Phase::Attack;
}

Enemy::~Enemy() {

}

