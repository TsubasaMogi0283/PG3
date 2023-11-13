#include "Rectangle.h"
#include <iostream>


Rectangle::Rectangle(float height,float width) {

	//引数をメンバ変数に入れよう
	height_ = height;
	width_ = width;

}

void Rectangle::Size() {
	area_ = height_ * width_;
}


void Rectangle::Draw() {
	//表示
	std::cout<< "Rectangle" << std::endl;
	std::cout<< area_ << std::endl << std::endl;
}

Rectangle::~Rectangle() {

}
