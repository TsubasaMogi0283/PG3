#include "Circle.h"
#include <iostream>

#define _USE_MATH_DEFINES
#include <math.h>


Circle::Circle(float radius) {
	//引数をメンバ変数に入れよう
	radius_ = radius;

}

void Circle::Size() {
	
	area_ = radius_ * radius_* M_PI;
}


void Circle::Draw() {
	std::cout<< "Circle" << std::endl;
	std::cout<< area_ << std::endl<< std::endl;

}

Circle::~Circle() {

}
