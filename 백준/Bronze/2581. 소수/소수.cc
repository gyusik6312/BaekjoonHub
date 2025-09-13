#include <stdio.h>
#include <stdbool.h>

int main()
{
    int M, N;
    int i, j;
    bool check;
    int min;
    int result = 0;

    scanf("%d %d", &M, &N);
    min = N;
    for (i = M; i <= N; i++)
    {
        check = true;
        if (i == 1)
        {
            check = false;
        }

        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                check = false;
            }
        }
        
        if (check)
        {
            result += i;
            if (min > i)
                min = i;
        }
    }

    if (result == 0)
    {
        printf("-1");
    }
    else
    {
        printf("%d\n%d", result, min);
    }

    return 0;
}