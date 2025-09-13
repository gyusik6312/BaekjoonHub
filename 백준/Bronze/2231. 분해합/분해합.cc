#include <stdio.h>

int main()
{
	int N;
	int temp;
	int result = 0;
	int sum;
	int i;

	scanf("%d", &N);

	for (i = 1; i <= N; i++)
	{
		sum = i;
		temp = i;
		do
		{
			sum += temp % 10;
			temp /= 10;
		} while (temp != 0);

		if (sum == N)
		{
			result = i;
			break;
		}
	}

	printf("%d", result);
	return 0;
}