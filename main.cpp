#include <stdio.h>
#include "Synthesizer.h"
#include "Massive.h"

int main() {

	
	Synthesizer* synthesizer = new Massive;

	synthesizer->Explain();

	delete synthesizer;

	return 0;
}