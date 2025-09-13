#include <stdio.h>

int main(void)
{
    int num1;
    int num2;
    int num3;

    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 == num2 && num2 == num3 && num1 == num3)
        printf("%d\n", 10000 + (num1) * 1000);
    else if (num1 == num2)
        printf("%d\n", 1000 + (num1) * 100);
    else if (num1 == num3)
        printf("%d\n", 1000 + (num1) * 100);
    else if (num2 == num3)
        printf("%d\n", 1000 + (num2) * 100);

    else if (num1 > num2 && num2 > num3 || num1 > num3 && num3 > num2)
        printf("%d\n", (num1) * 100);
    else if (num2 > num1 && num1 > num3 || num2 > num3 && num3 > num1)
        printf("%d\n", (num2) * 100);
    else
        printf("%d\n", (num3) * 100);

    return 0;
}