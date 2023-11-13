#include <stdio.h>
#include "Synthesizer.h"
#include "Synthesizer/Massive/Massive.h"
#include "Synthesizer/Serum/Serum.h"
#include "Synthesizer/Spire/Spire.h"



int main() {

	//コンストラクタ
	const int synthesizerNumber = 3;
	Synthesizer* synthesizer[synthesizerNumber];

	synthesizer[0] = new Massive;
	synthesizer[1] = new Serum;
	synthesizer[2] = new Spire;


	//説明
	for (int i = 0; i < 3; i++) {
		synthesizer[i]->Explain();
	}
	
	//デストラクタ
	for (int i = 0; i < synthesizerNumber; i++) {
		delete synthesizer[i];

	}
	
	return 0;
}