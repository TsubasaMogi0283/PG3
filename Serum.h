#pragma once
#include "Synthesizer.h"

class Serum: public Synthesizer {
public:
	//コンストラクタ
	Serum();

	//説明
	void Explain() override;



	//デストラクタ
	~Serum();


private:

	const char* name_;

};

