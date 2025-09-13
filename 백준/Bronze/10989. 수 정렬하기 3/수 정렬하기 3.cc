#include <stdio.h>

int main()
{
    int array[10001] = {0};
    int num;
    int count;
    int i, j;
    
    scanf("%d", &count);
    for(i = 0; i < count; i++)
    {
        scanf("%d", &num);
        array[num] ++;
    }
    
    for(i  = 1; i < 10001; i++)
    {
        if (array[i] != 0)
        {
            for(j = 0; j < array[i]; j++)
            {
                printf("%d\n", i);
            }
        }
    } 
    return 0;
}