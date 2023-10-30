#pragma once
#include "Synthesizer.h"

class Spire: public Synthesizer {
	public:
	//コンストラクタ
	Spire();


	//説明
	void Explain() override;



	//デストラクタ
	~Spire();


private:

	const char* name_;


};

