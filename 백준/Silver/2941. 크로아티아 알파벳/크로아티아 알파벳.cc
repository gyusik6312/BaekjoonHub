#include <stdio.h>
#include <string.h>

int main()
{
	char s[100];
	int i;
	int result = 0;

	scanf("%s", s);
	for (i = 0; i < strlen(s); i++)
	{
		if ((s[i] == 'c') && (s[i + 1] == '='))
		{
			result += 1;
			i++;
		}
		else if ((s[i] == 'c') && (s[i + 1] == '-'))
		{
			result += 1;
			i++;
		}
		else if ((s[i] == 'd') && (s[i + 1] == 'z') && (s[i + 2] == '='))
		{
			result += 1;
			i += 2;
		}
		else if ((s[i] == 'd') && (s[i + 1] == '-'))
		{
			result += 1;
			i++;
		}
		else if ((s[i] == 'l') && (s[i + 1] == 'j'))
		{
			result += 1;
			i++;
		}
		else if ((s[i] == 'n') && (s[i + 1] == 'j'))
		{
			result += 1;
			i++;
		}
		else if ((s[i] == 's') && (s[i + 1] == '='))
		{
			result += 1;
			i++;
		}
		else if ((s[i] == 'z') && (s[i + 1] == '='))
		{
			result += 1;
			i++;
		}
		else
			result += 1;
	}

	printf("%d", result);

	return 0;
}