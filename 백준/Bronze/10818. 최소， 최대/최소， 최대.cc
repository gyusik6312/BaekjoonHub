#include <stdio.h>

int main()
{
    int input[1000000];
    int count;
    int max;
    int min;
    int i;
    
    scanf("%d", &count);
    for(i = 0; i < count; i++)
        scanf("%d", &input[i]);
    
    max = input[0];
    min = input[0];
    for(i = 1; i < count; i++)
    {
        if(input[i] > max)
            max = input[i];
        if(input[i] < min)
            min = input[i];
    }
    
    printf("%d %d", min, max);
    
    return 0;
}