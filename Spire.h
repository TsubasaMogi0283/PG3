#pragma once
#include "Synthesizer.h"

class Spire: public Synthesizer {
	public:
	//�R���X�g���N�^
	Spire();

	void Explain() override;



	//�f�X�g���N�^
	~Spire();


private:

	const char* name_;


};

