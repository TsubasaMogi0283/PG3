#include "Enemy.h"





//�����o�֐��|�C���^
void (Enemy::* spFunctable[])() = {
	&Enemy::Proximity,
	&Enemy::Attack,
	&Enemy::Leave,


};

//�ߐ�
void Enemy::Proximity() {

}

//�ˌ�
void Enemy::Attack() {

}

//���E
void Enemy::Leave() {

}

//�X�V
void Enemy::Update() {
	//���݃t�F�[�Y�̊֐������s
	//�����o�֐��|�C���^�ɓ����Ă���֐����Ăяo��
	//�����ł�AppriachUpdate
	(this->*spFunctable[static_cast<size_t>(phase_)])();


	//�s����X�V

	//�f�o�b�O�p�\��

}



