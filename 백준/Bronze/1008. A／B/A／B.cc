#include <stdio.h>

int main(void)
{
	int num1;
	int num2;
	double num3;

	scanf("%d %d", &num1, &num2);

	num3 = (double)num1 / (double)num2;

	printf("%0.9lf\n", num3);

	return 0;
}