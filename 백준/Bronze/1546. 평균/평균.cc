#include <stdio.h>

int main()
{
	float result = 0;
	int score[1000];
	int max = 0;
	int N;
	int i;

	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf("%d", &score[i]);
		if (max < score[i])
			max = score[i];
	}
	for (i = 0; i < N; i++)
	{
		result += (float)score[i] / max * 100;
	}
    
	printf("%f", result / N);
	return 0;
}