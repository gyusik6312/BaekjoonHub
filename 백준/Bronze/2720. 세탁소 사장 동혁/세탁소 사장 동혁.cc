#include <stdio.h>

int main()
{
	int count;
	int coin[4] = { 0 };
	int money;
	int i, j;

	scanf("%d", &count);
	for (i = 0; i < count; i++)
	{
		scanf("%d", &money);
		coin[0] = money / 25;
		money %= 25;
		coin[1] = money / 10;
		money %= 10;
		coin[2] = money / 5;
		money %= 5;
		coin[3] = money / 1;

		for (j = 0; j < 4; j++)
			printf("%d ", coin[j]);
	}

	return 0;
}