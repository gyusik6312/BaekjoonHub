#include <stdio.h>

int main()
{
    int number1, number2;

    while(1)
    {
        scanf("%d %d", &number1, &number2);

        if ((number1 == 0) && (number2 == 0))
            break;

        if (number2 % number1 == 0)
            printf("factor\n");
        else if (number1 % number2 == 0)
            printf("multiple\n");
        else
            printf("neither\n");
    }

    return 0;
}