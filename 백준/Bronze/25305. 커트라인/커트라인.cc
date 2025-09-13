#include <stdio.h>

int main()
{
	int input[1000];
	int N;
	int k;
	int temp;
	int i, j;

	scanf("%d %d", &N, &k);
	for (i = 0; i < N; i++)
		scanf("%d", &input[i]);

	for (i = 0; i < N - 1; i++)
	{
		for (j = i + 1; j < N; j++)
		{
			if (input[i] < input[j])
			{
				temp = input[i];
				input[i] = input[j];
				input[j] = temp;
			}
		}
	}

	printf("%d", input[k - 1]);
	return 0;
}