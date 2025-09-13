#include <stdio.h>

int main()
{
	int N, M, i, j;
	int basket[100] = { 0 };
	int x, y, k;

	scanf("%d %d", &N, &M);
	for (i = 0; i < M; i++)
	{
		scanf("%d %d %d", &x, &y, &k);
		for (j = x - 1; j <= y - 1; j++)
			basket[j] = k;
	}

	for (i = 0; i < N; i++)
		printf("%d ", basket[i]);

	return 0;
}