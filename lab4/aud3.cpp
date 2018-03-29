#include "stdafx.h"
#include <stdlib.h>
#include <windows.h>

int main()
{
	
	SetConsoleOutputCP(1251);
	char num1[10], num2[10];
	printf("Введите 1 число:\n");
	gets_s(num1);
	printf("Введите 2 число:\n");
	gets_s(num2);
	printf("Сумма:%d\n", atoi(num1) + atoi(num2));
	printf("Разница:%d\n", atoi(num1) - atoi(num2));
	printf("Умножение:%d\n", atoi(num1) * atoi(num2));
	system("pause");
	return 0;
}