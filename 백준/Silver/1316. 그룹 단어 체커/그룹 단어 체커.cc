#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
	int N;
	char world[100];
	int count = 0;
	int i, j, o;
	bool check;

	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		check = true;
		scanf("%s", world);
		for (j = 0; j < strlen(world); j++)
		{
			for (o = j + 1; o < strlen(world); o++)
			{
				if ((world[j] == world[o]) && (world[o] != world[o - 1]))
				{
					check = false;
					break;
				}
			}
			if (check == false)
				break;
		}
		if (check)
			count++;
	}

	printf("%d", count);

	return 0;
}