#pragma once
class Synthesizer{
public:

	//コンストラクタ
	Synthesizer();

	//シンセについて分かる人この学科では確認できないので
	//説明する関数も作っておく
	virtual void Explain();

	//デストラクタ
	//こっちもvirtualを忘れずに
	virtual~Synthesizer();


private:

	const char* name_;


};

