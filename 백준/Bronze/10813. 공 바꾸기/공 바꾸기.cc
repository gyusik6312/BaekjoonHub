#include <stdio.h>

int main()
{
	int N, M, i;
	int basket[100] = {0};
	int x, y, check;

	scanf("%d %d", &N, &M);
	for (i = 0; i < N; i++)
	{
		basket[i] = i + 1;
	}

	for (i = 0; i < M; i++)
	{
		scanf("%d %d", &x, &y);
		if (x != y)
		{
			check = basket[x - 1];
			basket[x - 1] = basket[y - 1];
			basket[y - 1] = check;
		}
	}

	for (i = 0; i < N; i++)
		printf("%d ", basket[i]);

	return 0;
}