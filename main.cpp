#include <stdio.h>

#include "Add/Add.h"


int main() {

	
	//�֐��e���v���[�g�̎g����
	//�֐���<�^>(����)
	//%�̌��C��t���Ă�
	printf("%d\n", Add<int,int>(5, 12));
	printf("%f\n", Add<float,float>(0.5f, 1.2f));

	//������񏬐��_�ȉ��͐؂�̂Ă�6�ɂȂ�͂�
	//���v�ł���
	printf("%d\n", Add<int, float>(5, 1.2f));


	return 0;
}