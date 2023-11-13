#pragma once
#include "IShape.h"

class Circle  : public IShape{
public:

	Circle(float radius);

	void Size() override;

	void Draw() override;

	~Circle() override;



private:

	float radius_ = 0;


};

