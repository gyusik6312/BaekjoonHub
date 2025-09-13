#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);

	if ((c - a < 0))
		printf("0");
	else if ((c - a) * d >= b)
		printf("1");
	else
		printf("0");

	return 0;
}