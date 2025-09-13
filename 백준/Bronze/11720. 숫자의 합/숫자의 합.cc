#include <stdio.h>

int main()
{
	int count;
	char string[100];
	int result = 0;
	int i;
	int check;

	scanf("%d", &count);
	scanf("%s", string);

	for (i = 0; i < count; i++)
	{
		check = string[i] - '0';
		result += check;
	}

	printf("%d", result);

	return 0;
}