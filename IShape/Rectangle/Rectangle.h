#pragma once

#include "IShape.h"

class Rectangle  : public IShape{
public:

	Rectangle(float height,float width);

	void Size() override;


	void Draw() override;

	~Rectangle() override;



private:
	float height_ = 0;
	float width_ = 0;



};

