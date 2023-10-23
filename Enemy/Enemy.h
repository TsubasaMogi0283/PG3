#pragma once

class Enemy {
public:
	//�ߐ�
	void Proximity();

	//�ˌ�
	void Attack();

	//���E
	void Leave();

	//�X�V
	void Update();


private:
	//�����o�֐��|�C���^
	static void (Enemy::* spFunctable[])();


private:

	//enum�錾
	enum class Phase {
		Proximity,	//�ڋ�
		Attack,		//�ˌ�
		Leave,		//���E
	};

	Phase phase_ = Phase();

};