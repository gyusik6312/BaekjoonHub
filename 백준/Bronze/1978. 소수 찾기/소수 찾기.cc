#include <stdio.h>
#include <stdbool.h>

int main()
{
    int N;
    int number;
    int count = 0;
    int i, j;
    bool check;

    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &number);
        check = true;

        if (number == 1)
            check = false;
        for (j = 2; j < number; j++)
        {
            if ((number % j == 0) && (j != 1))
                check = false;
        }

        if (check == true)
            count++;
    }

    printf("%d", count);
    return 0;
}