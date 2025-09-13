#include <stdio.h>

int main()
{
    int count, i, max, min, result;
    scanf("%d", &count);
    
    int array[count];
    
    for(i = 0; i < count; i++)
    {
        scanf("%d", &array[i]);
    }
    
    max = array[0];
    min = array[0];
    
    for(i = 1; i < count; i++)
    {
        if(array[i] > max)
        {
            max = array[i];
        }
        
        if(array[i] < min)
        {
            min = array[i];
        }
    }
    
    result = max * min;
    
    printf("%d", result);
    
    return 0;
}