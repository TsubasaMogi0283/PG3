#pragma once

//�֐��e���v���[�g
//�^���ς���Ă���������������悤�ɂ����֐��̂���

//���d��`�Ə����Ⴄ�B���ۓI(�e���v��)����̓I(���d)��
//�ڂ����͎�����

//�����Ńe���v���[�g�^���`
//���int,float�ɒu�����������
//template <typename Type>


////��ʂɂ�Type��T�ŕ\�L�����
//Type1 Add(Type number1, Type number2) {
//	return static_cast<Type1 typename1,Type2 typename2>(number1 + number2);
//}




template <typename Type1,typename Type2>


//��ʂɂ�Type��T�ŕ\�L�����
Type1 Add(Type1 number1, Type2 number2) {
	return (number1 + number2);
}