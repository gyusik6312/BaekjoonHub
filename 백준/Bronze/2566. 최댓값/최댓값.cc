#include <stdio.h>

int main()
{
    int array[10][10];
    int i, j;
    int max_i, max_j, max;
    
    for(i = 1; i < 10; i++)
    {
        for(j = 1; j < 10; j++)
            scanf("%d", &array[i][j]);
    }
    
    max = array[1][1];
    max_i = 1;
    max_j = 1;
    for(i = 1; i < 10; i++)
    {
        for(j = 1; j < 10; j++)
        {
            if(max < array[i][j])
            {
                max = array[i][j];
                max_i = i;
                max_j = j;
            }
        }
    }
    
    printf("%d\n%d %d", max, max_i, max_j);
    
    return 0;
}