#include "Rectangle.h"
#include <iostream>


Rectangle::Rectangle(float height,float width) {

	//�����������o�ϐ��ɓ���悤
	height_ = height;
	width_ = width;

}

void Rectangle::Size() {
	area_ = height_ * width_;
}


void Rectangle::Draw() {
	//�\��
	std::cout<< "Rectangle" << std::endl;
	std::cout<< area_ << std::endl;
}

Rectangle::~Rectangle() {

}
