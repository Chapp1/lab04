#include "stdafx.h"
#include <stdlib.h>
#include <windows.h>

int main()
{
	
	SetConsoleOutputCP(1251);
	char num1[10], num2[10];
	printf("������� 1 �����:\n");
	gets_s(num1);
	printf("������� 2 �����:\n");
	gets_s(num2);
	printf("�����:%d\n", atoi(num1) + atoi(num2));
	printf("�������:%d\n", atoi(num1) - atoi(num2));
	printf("���������:%d\n", atoi(num1) * atoi(num2));
	system("pause");
	return 0;
}