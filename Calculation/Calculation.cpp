#include "Calculation.h"

int Add(int a, int b) {
	return a + b;
}

int Subtract(int a, int b) {
	return a - b;
}

//�R�[���o�b�N�֐�
void JudgeResult(int rollResult,int answer ) {
	//printf("%d�b�҂��Ď��s���ꂽ��\n", *s);
	
	

	if (rollResult % 2 == 0 && answer %2==0) {
		printf("����\n");
	}
	if (rollResult % 2 == 1 && answer%2== 1) {
		printf("����\n");
	}
	if (rollResult % 2 == 1 && answer%2== 0){
		printf("�s����\n");
	}
	if (rollResult % 2 == 0 && answer%2== 1){
		printf("�s����\n");
	}
	
}

int SetTimeout(std::function<int()> callback,int answer) {
	printf("���ē����͂Ȃ񂾂��\n");
	//Sleep�͑҂���
	//�����̓~���b����
	Sleep(answer * 1000);

	
	return callback();
}

//��������֐�
int GetDiceNumber() {
	std::random_device rnd;
	return rnd() % 6 + 1;
}