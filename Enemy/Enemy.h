//#pragma once
//#include <Windows.h>
//
////typedef void (*PFunc)(void);
//
//class Enemy {
//public:
//	Enemy();
//
//	//初期化
//	void Initialze();
//
//	
//
//	//更新
//	void Update();
//
//	//近接
//	void Approach();
//
//	//射撃
//	void Attack();
//
//	//離脱
//	void Leave();
//
//
//	~Enemy();
//
//private:
//	
//
//
//private:
//	
//	//enum宣言
//	enum class Phase {
//		Approach,	//接近
//		Attack,		//射撃
//		Leave,		//離脱
//	};
//
//	Phase phase_ = Phase();
//
//	//メンバ関数ポインタ
//	static void (Enemy::* spFunctable[])();
//
//};


//関数ポインタはその名前の通り関数を代入出来るポインタ
//ポインタなので動的

class Enemy {
public:
	Enemy();

	void Initialize();

	void Aproach();

	void Attack();

	void Leave();

	void Update();


private:


};



