#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int standard_number, change_number, stand, i, j;

	scanf("%d %d", &standard_number, &stand);

	for (i = 0; i < standard_number; i++)
	{
		scanf("%d", &change_number);

		if (change_number < stand)
		{
			printf("%d ", change_number);
		}
	}

	return 0;
}