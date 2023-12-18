#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

#include "Calculation/Calculation.h"
#include <functional>
#include "Enemy/Enemy.h"


int main() {

	Enemy* enemy = new Enemy();
	enemy->Initialize();

	enemy->Update();

	delete enemy;

	return 0;
}