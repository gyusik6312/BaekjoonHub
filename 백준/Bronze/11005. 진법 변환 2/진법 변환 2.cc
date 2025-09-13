#include <stdio.h>
#include <string.h>

int main()
{
	char result[100] = { 0 };
	long N;
	int B;
	int i = 0;

	scanf("%ld %d", &N, &B);
	while (N != 0)
	{
		if (N % B > 9)
		{
			result[i] = (N % B) + 55;
			N /= B;
		}
		else
		{
			result[i] = (N % B) + 48;
			N /= B;
		}
		i++;
	}

	for (i = strlen(result) - 1; i >= 0; i--)
		printf("%c", result[i]);

	return 0;
}