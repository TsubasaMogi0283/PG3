#pragma once

//�N���X�e���v���[�g
//�ƌ����Ă��B�^���S���ėp�I�Ɏg������̂ɂ��邾���B���Ǝv���B

template<typename Type>
class Template{
public:
	

	//�����o�ϐ�(����)
	Template(Type a, Type b) :a_(a), b_(b) {};

	Type Add() {
		return static_cast<Type>(a_ + b_);
	}

public:

	Type a_;
	Type b_;


};


