#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int array[10] = { 0 };
	long num;
	int temp;
	int i, j;

	scanf("%ld", &num);
	do
	{
		temp = num % 10;
		array[temp]++;
		num /= 10;
	} while (num != 0);

	for (i = 9; i >= 0; i--)
	{
		if (array[i] != 0)
		{
			for (j = 0; j < array[i]; j++)
			{
				printf("%d", i);
			}
		}
	}
	return 0;
}