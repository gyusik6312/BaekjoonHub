#include <stdio.h>

int main()
{
    int x, y, w, h;
    int result_x, result_y;
    
    scanf("%d %d %d %d", &x, &y, &w, &h);
    
    if((double)x > (double)w/2)
        result_x = w - x;
    else
        result_x = x;
    if((double)y > (double)h/2)
        result_y = h - y;
    else
        result_y = y;
    
    if(result_x > result_y)
        printf("%d", result_y);
    else
        printf("%d", result_x);
    
    return 0;
}