#include "Circle.h"
#include <iostream>

#define _USE_MATH_DEFINES
#include <math.h>


Circle::Circle(float radius) {
	//ˆø”‚ğƒƒ“ƒo•Ï”‚É“ü‚ê‚æ‚¤
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
