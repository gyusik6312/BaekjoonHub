#include <stdio.h>

int main()
{
	int num1;

	scanf("%d", &num1);

	if (num1 <= 100, num1 >= 90)
		printf("A");
	else if (num1 <= 89, num1 >= 80)
		printf("B");
	else if (num1 <= 79, num1 >= 70)
		printf("C");
	else if (num1 <= 69, num1 >= 60)
		printf("D");
	else
		printf("F");

	return 0;
}