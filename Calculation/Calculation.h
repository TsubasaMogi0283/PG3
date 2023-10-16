#pragma once
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <random>

int Add(int a, int b);
int Subtract(int a, int b);


typedef void (*PFunc)(int*);


int GetDiceNumber();
