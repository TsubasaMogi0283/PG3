#pragma once

//�N���X�e���v���[�g
//�ƌ����Ă��B�^���S���ėp�I�Ɏg������̂ɂ��邾���B���Ǝv���B

template<typename Type>
class Template{
public:
	Type Template(Type a, Type b) :a(a), b(b) {
	}

	Type Add() {
		return static_cast<Type>(a + b);
	}



	
public:
	Type a;
	Type b;




};

