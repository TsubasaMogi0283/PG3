#pragma once
#include <stdio.h>
#include <windows.h>


int Add(int a, int b);
int Subtract(int a, int b);


typedef void (*PFunc)(int*);


//コールバック関数
void DisplayResult(int* s);

void SetTimeout
