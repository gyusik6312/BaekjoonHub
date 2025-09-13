#include <stdio.h>

int main()
{
	int x1, y1, x2, y2, x3, y3;
	int result1, result2;

	scanf("%d %d", &x1, &y1);
	scanf("%d %d", &x2, &y2);
	scanf("%d %d", &x3, &y3);

	if (x1 == x2)
		result1 = x3;
	else if (x2 == x3)
		result1 = x1;
	else
		result1 = x2;

	if (y1 == y2)
		result2 = y3;
	else if (y2 == y3)
		result2 = y1;
	else
		result2 = y2;

	printf("%d %d", result1, result2);

	return 0;
}