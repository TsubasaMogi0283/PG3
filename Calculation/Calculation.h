#pragma once
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <random>

int Add(int a, int b);
int Subtract(int a, int b);


typedef void (*PFunc)(int*);


//コールバック関数
//他の関数に引数として渡す関数のこと
void DisplayResult(int *answer );

void SetTimeout(PFunc p, int second);


int GetDiceNumber();
