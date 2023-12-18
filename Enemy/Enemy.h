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


	~Enemy();

private:

	void (Enemy::* pFunc)();

};



