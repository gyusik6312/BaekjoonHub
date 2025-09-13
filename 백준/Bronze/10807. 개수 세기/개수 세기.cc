#include <stdio.h>

int main()
{
	int input[100];
	int size;
	int check;
	int result = 0;
	int i;

	scanf("%d", &size);
	for (i = 0; i < size; i++)
		scanf("%d", &input[i]);

	scanf("%d", &check);
	for (i = 0; i < size; i++)
	{
		if (check == input[i])
			result += 1;
	}

	printf("%d", result);

	return 0;
}