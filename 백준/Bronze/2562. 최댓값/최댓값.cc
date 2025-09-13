#include <stdio.h>

int main()
{
    int input[9];
    int max;
    int max_i;
    int i;

    for(i = 0; i < 9; i++)
        scanf("%d", &input[i]);
    
    max = input[0];
    max_i = 1;
    for(i = 1; i < 9; i++)
    {
        if(max < input[i])
        {
            max = input[i];
            max_i = i + 1;
        }
    }
    
    printf("%d\n%d", max, max_i);

    return 0;
}