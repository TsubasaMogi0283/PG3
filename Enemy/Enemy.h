#pragma once
#include <Windows.h>

//typedef void (*PFunc)(void);

class Enemy {
public:
	Enemy();

	//������
	void Initialze();

	

	//�X�V
	void Update();

	//�ߐ�
	void Approach();

	//�ˌ�
	void Attack();

	//���E
	void Leave();


	~Enemy();

private:
	


private:
	
	//enum�錾
	enum class Phase {
		Approach,	//�ڋ�
		Attack,		//�ˌ�
		Leave,		//���E
	};

	Phase phase_ = Phase();

	//�����o�֐��|�C���^
	static void (Enemy::* spFunctable[])();

};