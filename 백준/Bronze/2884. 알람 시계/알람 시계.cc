#include <stdio.h>

int main(void)
{
    int H;
    int M;

    scanf("%d %d", &H, &M);

    if (M > 45 || M == 45)
        printf("%d %d\n", H, M - 45);
    else if (H == 0 && M < 45)
        printf("23 %d\n", 60 - (45 - M));
    else
        printf("%d %d\n", H - 1, 60 - (45 - M));

    return 0;
}