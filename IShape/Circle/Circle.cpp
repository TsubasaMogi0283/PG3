#include "Circle.h"
#include <iostream>

#define _USE_MATH_DEFINES
#include <math.h>


Circle::Circle(float radius) {
	//�����������o�ϐ��ɓ���悤
	radius_ = radius;

}

void Circle::Size() {
	
	area_ = radius_ * radius_* M_PI;
}


void Circle::Draw() {
	std::cout<< "" << std::endl;
	std::cout<< area_ << std::endl;
}

Circle::~Circle() {

}
