#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int input[6];
	int check[6] = { 1, 1, 2, 2, 2, 8 };
	int i;

	for (i = 0; i < 6; i++)
		scanf("%d", &input[i]);

	for (i = 0; i < 6; i++)
	{
		printf("%d ", check[i] - input[i]);
	}

	return 0;
}