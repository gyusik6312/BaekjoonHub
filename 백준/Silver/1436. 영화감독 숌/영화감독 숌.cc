#include <stdio.h>

int main()
{
	int i = 666;
	int count_six = 0;
	int count = 0;
	int N;
	int temp;
	long result;

	scanf("%d", &N);
	while (1)
	{
		count_six = 0;
		temp = i;

		while(1)
		{
			if (temp % 10 == 6)
			{
				count_six++;
			}
			else
				count_six = 0;

			temp /= 10;

			if ((temp == 0) || (count_six > 2))
				break;
		}

		if (count_six > 2)
		{
			count++;
		}

		if (count == N)
		{
			result = i;
			break;
		}
		i++;
	}

	printf("%ld", result);
    return 0;
}