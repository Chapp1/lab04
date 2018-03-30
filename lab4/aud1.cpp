#include "stdafx.h"
#include "stdafx.h" 
#include <windows.h>

int main()
{
	
	SetConsoleOutputCP(1251);
	char arr[20];
	int* freq;
	int arr_size;
	printf("Введите слово: ");
	gets_s(arr);
	arr_size = strlen(arr);
	freq = (int*)calloc(arr_size, sizeof(int));
	for (int i = 0; i < arr_size; ++i) {
		freq[i] = 1;
	}
	for (int i = 0; i < arr_size; ++i) {
		for (int j = i + 1; j < arr_size; ++j) {
			if (arr[i] == arr[j]) {
				freq[i]++;
				arr[j] = 0;
			}
		}
	}
	for (int i = 0; i < arr_size; ++i) {
		if (arr[i] != 0) {
			printf("Символ %c повторяется %d раз\n", arr[i], freq[i]);
		}
	}
	system("pause");
	return 0;
}