#pragma once
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <random>
#include <functional>


int Add(int a, int b);
int Subtract(int a, int b);


typedef void (*PFunc)(int);


//�R�[���o�b�N�֐�
//���̊֐��Ɉ����Ƃ��ēn���֐��̂���
void DisplayResult(int answer );

int SetTimeout(std::function<int()> collback, int second);


int GetDiceNumber();