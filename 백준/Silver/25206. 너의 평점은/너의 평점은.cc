#include <stdio.h>

int main()
{
	char subject[30];
	char average[30];
	double score;
	double change;
	double sum_score = 0;
	double sum = 0;
	int i;

	for (i = 0; i < 20; i++)
	{
		scanf("%s %lf %s", subject, &score, average);
		change = 0.0;

		if ((average[0] == 'A') && (average[1] == '+'))
			change = 4.5;
		else if ((average[0] == 'A') && (average[1] == '0'))
			change = 4.0;
		else if ((average[0] == 'B') && (average[1] == '+'))
			change = 3.5;
		else if ((average[0] == 'B') && (average[1] == '0'))
			change = 3.0;
		else if ((average[0] == 'C') && (average[1] == '+'))
			change = 2.5;
		else if ((average[0] == 'C') && (average[1] == '0'))
			change = 2.0;
		else if ((average[0] == 'D') && (average[1] == '+'))
			change = 1.5;
		else if ((average[0] == 'D') && (average[1] == '0'))
			change = 1.0;
		else if (average[0] == 'F')
			change = 0;

		if (average[0] != 'P')
		{
			sum_score += score;
			sum += score * change;
		}
	}

	printf("%lf", sum / sum_score);

	return 0;
}