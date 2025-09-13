#include <stdio.h>
#include <stdbool.h>

void change(char* string)
{
	int temp = string[0];
	string[0] = string[2];
	string[2] = temp;
}

int main()
{
	char number1[4];
	char number2[4];
	int i;
	int temp;
	bool check = true;

	scanf("%s %s", number1, number2);
	change(number1);
	change(number2);

	for (i = 0; i < 3; i++)
	{
		if (number1[i] < number2[i])
		{
			check = false;
			break;
		}
		else if (number1[i] > number2[i])
			break;
	}

	if (check)
		printf("%s", number1);
	else
		printf("%s", number2);

	return 0;
}