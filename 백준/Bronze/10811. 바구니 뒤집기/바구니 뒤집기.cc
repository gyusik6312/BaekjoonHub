#include <stdio.h>

int main()
{
	int basket[100];
	int N, M;   //첫 입력
	int i, j, o;   //반복문 활용
	int x, y;   //범위 
	int temp;

	scanf("%d %d", &N, &M);
	for (i = 1; i <= N; i++)
	{
		basket[i] = i;
	}

	for (i = 0; i < M; i++)
	{
		scanf("%d %d", &x, &y);
		for (j = x, o = y; j <= o; j++, o--)
		{
			temp = basket[j];
			basket[j] = basket[o];
			basket[o] = temp;
		}
	}

	for (i = 1; i <= N; i++)
	{
		printf("%d ", basket[i]);
	}
	return 0;
}