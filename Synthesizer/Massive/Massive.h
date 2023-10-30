#pragma once
#include "Synthesizer.h"

class Massive : public Synthesizer {
public:
	//コンストラクタ
	Massive();

	//説明
	void Explain() override;



	//デストラクタ
	~Massive();


private:

	const char* name_;

};


