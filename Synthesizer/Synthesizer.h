#pragma once
class Synthesizer{
public:

	//�R���X�g���N�^
	Synthesizer();

	//�V���Z�ɂ��ĕ�����l���̊w�Ȃł͊m�F�ł��Ȃ��̂�
	//��������֐�������Ă���
	virtual void Explain();

	//�f�X�g���N�^
	//��������virtual��Y�ꂸ��
	virtual~Synthesizer();


private:

	const char* name_;


};

