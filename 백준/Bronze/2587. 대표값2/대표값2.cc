#include <stdio.h>

int main()
{
	int input[5];
	int average = 0;
	int middle;
	int i, j;
	int temp;

	for (i = 0; i < 5; i++)
	{
		scanf("%d", &input[i]);
		average += input[i];
	}

	for (i = 0; i < 5; i++)
	{
		for (j = i + 1; j < 5; j++)
		{
			if (input[i] > input[j])
			{
				temp = input[i];
				input[i] = input[j];
				input[j] = temp;
			}
		}
	}
	average /= 5;
	middle = input[2];

	printf("%d\n%d", average, middle);

	return 0;
}