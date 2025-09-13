#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char string[1000000];
	int count = 0;
	int i;

	scanf("%[^\n]s", string);
	for (i = 0; i < strlen(string); i++)
	{
		if (string[i] == ' ')
		{
			count++;
		}
	}
	if (string[0] == ' ')
		count--;
	if (string[strlen(string) - 1] == ' ')
		count--;

	printf("%d\n", count + 1);
	return 0;
}