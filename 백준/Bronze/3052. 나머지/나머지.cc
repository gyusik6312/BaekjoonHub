#include <stdio.h>
#include <stdbool.h>

int main()
{
	int result[10];
	int number;
	int i, j;
	int count = 0;
	bool check;

	for (i = 0; i < 10; i++)
	{
		scanf("%d", &number);
		result[i] = number % 42;
	}

	for (i = 0; i < 10; i++)
	{
		check = true;
		for (j = 0; j < i; j++)
		{
			if (result[i] == result[j])
				check = false;
		}
		if (check)
			count++;
	}

	printf("%d", count);

	return 0;
}