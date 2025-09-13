#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
	long result = 0;
	long B = 0;
	char N[20];
	int count = 0;
	int i;

	scanf("%s %ld", N, &B);

	for (i = strlen(N) - 1; i >= 0; i--)
	{
		if (('A' <= N[i]) && (N[i] <= 'Z'))
		{
			result += (N[i] - 55) * (int)pow(B, count);
		}
		else
		{
			result += (N[i] - 48) * (int)pow(B, count);
		}
		count++;
	}

	printf("%ld", result);

	return 0;
}