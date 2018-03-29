#include "stdafx.h"
#include <windows.h>

int main()
{
	SetConsoleOutputCP(1251);
	char arr[20];
	printf("Введите слово: ");
	gets_s(arr);
	int a = 1;
	for (int i = 0; i < strlen(arr); ++i) {
		if ((arr[i] > 'z' || arr[i] < 'a') && (arr[i] > 'Z' || arr[i] < 'A')) {
			a = 0;
		}
	}
	if (a) {
		printf("Вы ввели слово\n");
	}
	else
		printf("Вы ввели не слово\n");
	system("pause");
	return 0;
}