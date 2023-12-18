#include <stdio.h>

#include "Composer/Composer.h"
#include "Composer/t+pazolite/t_pazolite.h"
#include "Composer/RiraN/RiraN.h"

int main() {
	static const int PERSON = 2;
	Composer* composer[PERSON] = { nullptr };

	composer[0] = new t_pazolite();
	composer[1] = new RiraN();
	

	for (int i = 0; i < PERSON; i++) {
		composer[i]->Introduce();
	}


	for (int i = 0; i < PERSON; i++) {
		delete composer[i];
	}

	return 0;
}