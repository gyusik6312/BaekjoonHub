#include <stdio.h>

int main()
{
    int x, y, z;
    while(1)
    {
        scanf("%d %d %d", &x, &y, &z);
        
        if ((x == 0) || (y == 0) || (z == 0))
            break;
        else if ((x >= y) && (x >= z) && (x >= y + z))
            printf("Invalid");
        else if ((y >= x) && (y >= z) && (y >= x + z))
            printf("Invalid");
        else if ((z >= x) && (z >= x) && (z >= x + y))
            printf("Invalid");
        else if ((x == y) && (y == z) && (x == z))
            printf("Equilateral");
        else if ((x == y) || (y == z) || (x == z))
            printf("Isosceles");
        else if ((x != y) && (y != z) && (x != z))
            printf("Scalene");
        printf("\n");
    }
    return 0;
}