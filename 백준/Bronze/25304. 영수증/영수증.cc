#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int total_price, type, amount, amount_price;
	int result_price = 0;
	int i;
    
	scanf("%d", &total_price);
    
	scanf("%d", &type);

	for (i = 0; i < type; i++)
	{
		scanf("%d %d", &amount_price, &amount);
		result_price += amount_price * amount;
	}

	if (result_price == total_price)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}

	return 0;
}