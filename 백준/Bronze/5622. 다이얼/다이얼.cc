#include <stdio.h>
#include <string.h>

int main()
{
	char input[15];
	int alpha[30];
	int i, j;
	int count;
	int temp;
	int check;
	int result = 0;

	temp = 1;
	scanf("%s", input);
	for (i = 0; i < 26; i+=3)
	{
		temp += 1;
		if ((i != 15) && (i != 22))
		{
			for (j = i; j < i + 3; j++)
				alpha[j] = temp;
		}
		else if ((i == 15) || (i == 22))
		{
			for (j = i; j < i + 4; j++)
				alpha[j] = temp;
			i++;
		}
	}

	for (i = 0; i < strlen(input); i++)
	{
		check = input[i] - 'A';
		for (j = 0; j < 26; j++)
		{
			if (check == j)
				result += 2 + (alpha[j] - 1);
		}
	}
	printf("%d\n", result);

	return 0;
}