#include <stdio.h>

int main()
{
    int number;
    int result;
    int i;

    while (1)
    {
        scanf("%d", &number);
        result = 0;

        if (number == -1)
            return 0;

        for (i = 1; i < number; i++)
        {
            if (number % i == 0)
                result += i;
        }
        if (result == number)
        {
            printf("%d = 1", number);
            for (i = 2; i < number; i++)
            {
                if (number % i == 0)
                {
                    printf(" + %d", i);
                }
            }
            printf("\n");
        }
        else
            printf("%d is NOT perfect.\n", number);
    }
}