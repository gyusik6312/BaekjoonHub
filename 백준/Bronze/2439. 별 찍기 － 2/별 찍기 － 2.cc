#include <stdio.h>

int main(void)
{
    int count;
    
    scanf("%d", &count);
    
    for (int i = 0; i < count; i++)
    {
        for (int j = count - 1; j >= 0; j--)
        {
            if (j <= i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    
    return 0;
}