#include <stdio.h>
#include <stdlib.h>

struct location {
	int x;
	int y;
};

int compare(const void* a, const void* b)
{
	struct location num1 = *(struct location*)a;
	struct location num2 = *(struct location*)b;

	if (num1.y < num2.y)
		return -1;
	else if (num1.y > num2.y)
		return 1;
	if (num1.y == num2.y)
	{
		if (num1.x < num2.x)
			return -1;
		else if (num1.x > num2.x)
			return 1;
		else
			return 0;
	}
}

struct location input[100000];
int main()
{
	int n;
	int i;

	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d %d", &input[i].x, &input[i].y);
	}

	qsort(input, n, sizeof(struct location), compare);
	for (i = 0; i < n; i++)
		printf("%d %d\n", input[i].x, input[i].y);

	return 0;
}