#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int N, M;
	char input[50][50];
	int count_B, count_W;
	int i, j, a, b;
	int min = 64;
	char board_B[8][8];
	char board_W[8][8];
	int check = 1;

	scanf("%d %d", &N, &M);
	for (i = 0; i < N; i++)
	{
		scanf("%s", input[i]);
	}

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (check == 1)
			{
				board_B[i][j] = 'B';
				board_W[i][j] = 'W';
				check = 2;
			}
			else if (check == 2)
			{
				board_B[i][j] = 'W';
				board_W[i][j] = 'B';
				check = 1;
			}
		}
		if (check == 1)
			check = 2;
		else
			check = 1;
	}

	for (i = 0; i < N - 7; i++)
	{
		for (j = 0; j < M - 7; j++)
		{
			count_B = 0;
			count_W = 0;
			for (a = i; a < i + 8; a++)
			{
				for (b = j; b < j + 8; b++)
				{
					if (input[a][b] != board_B[a - i][b - j])
					{
						count_B++;
					}
					if (input[a][b] != board_W[a - i][b - j])
					{
						count_W++;
					}
				}
			}
			if (min > count_B)
				min = count_B;
			if (min > count_W)
				min = count_W;

		}
	}
	printf("%d", min);
	return 0;
}