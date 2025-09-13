#include <stdio.h>
#include <stdbool.h>

int main()
{
    int N;
    int check;
    int i;

    scanf("%d", &N);
    if (N == 1)
    {
        return 0;
    }
    else
    {
        while (1)
        {
            check = 0;
            for (i = 2; i <= N; i++)
            {
                if (N % i == 0)
                {
                    printf("%d\n", i);
                    check = 1;
                    N /= i;
                    break;
                }
            }
            if (check == 0)
                return 0;
        }
    }
}