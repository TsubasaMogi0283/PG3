#include "Calculation.h"

int Add(int a, int b) {
	return a + b;
}

int Subtract(int a, int b) {
	return a - b;
}

//�R�[���o�b�N�֐�
void DisplayResult(int answer ) {
	//printf("%d�b�҂��Ď��s���ꂽ��\n", *s);
	
	int rndNumber = GetDiceNumber();


	printf("��������̒l��%d����\n", rndNumber);
	
	if (rndNumber % 2 == 0 &&answer%2==0) {
		printf("����!!\n");
	}
	else if (rndNumber % 2 == 1 &&answer%2==1) {
		printf("����!!\n");
	}
	else {
		printf("�s�����E�E\n");
	}
}

int SetTimeout(std::function<int()> callback,int answer) {
	printf("���ē����͂Ȃ񂾂��\n\n");
	//Sleep�͑҂���
	//�����̓~���b����
	Sleep(3 * 1000);

	
	return callback();
}

//��������֐�
int GetDiceNumber() {
	std::random_device rnd;
	return rnd() % 6 + 1;
}