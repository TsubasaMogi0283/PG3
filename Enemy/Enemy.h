#pragma once

class Enemy {
public:
	//近接
	void Proximity();

	//射撃
	void Attack();

	//離脱
	void Leave();

	//更新
	void Update();


private:
	//メンバ関数ポインタ
	static void (Enemy::* spFunctable[])();


private:

	//enum宣言
	enum class Phase {
		Proximity,	//接近
		Attack,		//射撃
		Leave,		//離脱
	};

	Phase phase_ = Phase();

};