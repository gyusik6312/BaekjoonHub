#include <stdio.h>
#include <string.h>

int main()
{
	char s[100];
	int result = 1;
	int i, j;

	scanf("%s", s);
	for (i = 0, j = strlen(s) - 1; i < strlen(s), j >= 0; i++, j--)
	{
		if (s[i] != s[j])
		{
			result = 0;
			break;
		}
	}

	printf("%d", result);

	return 0;
}