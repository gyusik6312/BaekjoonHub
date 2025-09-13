#include <stdio.h>

int main(void)
{
    int count;
    scanf("%d", &count);
    
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
            if (j <= i)
                printf("*");
        }
        printf("\n");
    }
    
    return 0;
}