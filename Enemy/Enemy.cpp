#include "Enemy.h"
#include <stdio.h>


Enemy::Enemy() {

}

void Enemy::Initialze() {
	phase_ = Phase::Approach;
}

//�����o�֐��|�C���^
void (Enemy::* Enemy::spFunctable[])() = {
	//���ꂼ��̊֐�
	&Enemy::Approach,
	&Enemy::Attack,
	&Enemy::Leave,


};

//�ߐ�
void Enemy::Approach() {
	printf("�ߐ�\n");
	//Sleep(3 * 1000);
	phase_ = Phase::Attack;
}

//�ˌ�
void Enemy::Attack() {
	printf("�ˌ�\n");
	//Sleep(3 * 1000);
	phase_ = Phase::Leave;

}

//���E
void Enemy::Leave() {
	printf("���E\n");
}

//�X�V
void Enemy::Update() {
	//���[�v���Ȃ�����C��t����
	//for������Ȃ��ƃL�c�C����

	//���݃t�F�[�Y�̊֐������s
	//�����o�֐��|�C���^�ɓ����Ă���֐����Ăяo��
	for (int i = 0; i < 3; i++) {
		(this->*spFunctable[static_cast<size_t>(phase_)])();
	}
	
}

Enemy::~Enemy() {

}

