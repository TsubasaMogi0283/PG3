#pragma once
#include "Synthesizer.h"

class Serum: public Synthesizer {
public:
	//�R���X�g���N�^
	Serum();

	//����
	void Explain() override;



	//�f�X�g���N�^
	~Serum();


private:

	const char* name_;

};

