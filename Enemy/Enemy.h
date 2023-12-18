//関数ポインタはその名前の通り関数を代入出来るポインタ
//ポインタなので動的
#include <stdio.h>

class Enemy {
public:
	Enemy();

	void Initialize();

	void Aproach();

	void Attack();

	void Leave();

	void Update();


	~Enemy();

private:

	//関数ポインタ
	void (Enemy::* pFunc)();

	//テーブル
	//インスタンスごとに変えるものではないためstaticにしているよ
	static void(Enemy::* pFucTable[])();

};



