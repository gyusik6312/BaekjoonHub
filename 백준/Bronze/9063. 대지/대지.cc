#include <stdio.h>

int main()
{
    int x, y, N;
    int x_max = -10000;
    int y_max = -10000;
    int x_min = 10000;
    int y_min = 10000;
    long result;
    int i;
    
    scanf("%d", &N);
    if(N == 1)
    {
        scanf("%d %d", &x, &y);
        printf("0");
        return 0;
    }
    
    for (i = 0; i < N; i++)
    {
        scanf("%d %d", &x, &y);
        
        if(x > x_max)
            x_max = x;
        if(x < x_min)
            x_min = x;
        
        if(y > y_max)
            y_max = y;
        if(y < y_min)
            y_min = y;
    }
    result = (x_max - x_min) * (y_max - y_min);
    printf("%ld", result);
    
    return 0;
}