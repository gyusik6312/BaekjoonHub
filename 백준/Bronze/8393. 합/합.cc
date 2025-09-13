#include <stdio.h>

int main(void)
{
    int number;
    int sum = 0;
    
    scanf("%d", &number);
    
    for(int i = 0; i <= number; i++)
    {
        sum += i;
    }
    printf("%d\n", sum);
    
    return 0;
}