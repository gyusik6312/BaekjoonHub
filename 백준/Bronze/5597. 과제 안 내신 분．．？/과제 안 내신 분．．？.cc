#include <stdio.h>

int main()
{
	int student[30] = { 0 };
	int i, check;

	for (i = 0; i < 28; i++)
	{
		scanf("%d", &check);
		if (student[check - 1] == 0)
			student[check - 1] = 1;
	}

	for (i = 0; i < 30; i++)
	{
		if (student[i] == 0)
			printf("%d\n", i + 1);
	}

	return 0;
}