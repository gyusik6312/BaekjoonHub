#include <stdio.h>
#include <math.h>

int main()
{
    int count = 0;
    int temp = 2;
    long result = 0;
    int i;
    
    scanf("%d", &count);
    
    for(i = 1; i <= count; i++)
    {
        temp +=(int)pow(2, i - 1);
        result = (int)pow(temp, 2);
    }
    printf("%ld", result);
    
    return 0;
}