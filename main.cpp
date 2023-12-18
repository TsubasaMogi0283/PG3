#include <stdio.h>
#include "IShape.h"
#include "Circle/Circle.h"
#include "Rectangle/Rectangle.h"


int main() {
	static const int AMOUNT = 2;
	IShape* rectangle[AMOUNT] = { nullptr };

	rectangle[0] = new Circle(3.0f);
	rectangle[1] = new Rectangle(10.0f,20.0f);

	for (int i = 0; i < AMOUNT; i++) {
		rectangle[i]->Size();
	}

	for (int i = 0; i < AMOUNT; i++) {
		rectangle[i]->Draw();
	}

	for (int i = 0; i < AMOUNT; i++) {
		delete rectangle[i];
	}

	return 0;
}