#include <stdio.h>
#include "IShape.h"
#include "Circle/Circle.h"
#include "Rectangle/Rectangle.h"


int main() {
	const int SHAPE_NUMBER = 2;
	IShape* shape[SHAPE_NUMBER] = { nullptr };

	float radius = 2.0f;
	float height = 10;
	float width = 10;


	shape[0] = new Circle(radius);
	shape[1] = new Rectangle(height,width);

	for (int i = 0; i < SHAPE_NUMBER; i++) {
		shape[i]->Size();

	}


	for (int i = 0; i < SHAPE_NUMBER; i++) {
		shape[i]->Draw();

	}



	for (int i = 0; i < SHAPE_NUMBER; i++) {
		delete shape[i];

	}

	return 0;
}