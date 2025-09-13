#include <stdio.h>

int main()
{
    long n;
    long long result;
    scanf("%ld", &n);
    
    result = (n * (n-1) * (n - 2)) / 6;
    printf("%lld\n3", result);
    
    return 0;
}