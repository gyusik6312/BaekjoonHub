#include <stdio.h>

int main()
{
    int N, K;
    int count = 0;
    int i;
    int result;
    
    scanf("%d %d", &N, &K);
    for(i = 1; i <= N; i++)
    {
        if (N % i == 0)
        {
            count++;
            result = i;
        }
        
        if(count == K)
            break;
    }
    if(count < K)
        result = 0;
    printf("%d", result);
    
    return 0;
}