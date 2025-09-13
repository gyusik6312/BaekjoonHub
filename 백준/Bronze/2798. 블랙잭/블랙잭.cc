#include <stdio.h>

int main()
{
	int N, M;
	int array[100];
	int i, j, k;
	int min;
	int temp;
	int result = 0;

	scanf("%d %d", &N, &M);
	for (i = 0; i < N; i++)
		scanf("%d", &array[i]);

	min = M;
	for (i = 0; i < N - 2; i++)
	{
		for (j = i + 1; j < N - 1; j++)
		{
			for (k = j + 1; k < N; k++)
			{
				temp = M - array[i] - array[j] - array[k];          //temp = M과 세 카드 합의 차이(0과 가까울수록 차이가 많이 나지 않고 temp < 0이면 세합이 M을 넘는값
				if ((min > temp) && (temp >= 0))
				{
					min = temp;
					result = array[i] + array[j] + array[k];
				}
			}
		}
	}
	if (result != 0)
		printf("%d", result);

	return 0;
}