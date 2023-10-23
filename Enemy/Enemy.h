#pragma once

class Enemy {
public:
	//ίΪ
	void Proximity();

	//Λ
	void Attack();

	//£E
	void Leave();

	//XV
	void Update();


private:
	//oΦ|C^
	static void (Enemy::* spFunctable[])();


private:

	//enumιΎ
	enum class Phase {
		Proximity,	//Ϊί
		Attack,		//Λ
		Leave,		//£E
	};

	Phase phase_ = Phase();

};