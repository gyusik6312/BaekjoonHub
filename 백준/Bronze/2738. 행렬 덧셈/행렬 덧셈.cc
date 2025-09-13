#include <stdio.h>

int main()
{
	int A[200][200];
	int B[200][200];
	int result[200][200];
	int i, j;
	int N, M;

	scanf("%d %d", &N, &M);
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < M; j++)
			scanf("%d ", &A[i][j]);
	}

	for (i = 0; i < N; i++)
	{
		for (j = 0; j < M; j++)
		{
			scanf("%d ", &B[i][j]);
			result[i][j] = A[i][j] + B[i][j];
		}
	}

	for (i = 0; i < N; i++)
	{
		for (j = 0; j < M; j++)
		{
			printf("%d ", result[i][j]);
		}
		printf("\n");
	}

	return 0;
}