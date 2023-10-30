#pragma once
#include <Windows.h>

//typedef void (*PFunc)(void);

class Enemy {
public:
	Enemy();

	//ϊ»
	void Initialze();

	

	//XV
	void Update();

	//ίΪ
	void Approach();

	//Λ
	void Attack();

	//£E
	void Leave();


	~Enemy();

private:
	


private:
	
	//enumιΎ
	enum class Phase {
		Approach,	//Ϊί
		Attack,		//Λ
		Leave,		//£E
	};

	Phase phase_ = Phase();

	//oΦ|C^
	static void (Enemy::* spFunctable[])();

};