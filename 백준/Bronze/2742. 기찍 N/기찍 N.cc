#include<stdio.h>

int main(void)
{
    int count;
    
    scanf("%d", &count);
    
    for (int i = count; i >= 1; i--)
    {
        printf("%d\n", i);
    }
    
    return 0;
}