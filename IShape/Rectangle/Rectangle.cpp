#include "Rectangle.h"
#include <iostream>


Rectangle::Rectangle(float height,float width) {

	//ˆø”‚ğƒƒ“ƒo•Ï”‚É“ü‚ê‚æ‚¤
	height_ = height;
	width_ = width;

}

void Rectangle::Size() {
	area_ = height_ * width_;
}


void Rectangle::Draw() {
	//•\¦
	std::cout<< "Rectangle" << std::endl;
	std::cout<< area_ << std::endl;
}

Rectangle::~Rectangle() {

}
