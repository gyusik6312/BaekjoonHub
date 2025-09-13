#include <stdio.h>

int main(void) {
    int X;
    scanf("%d", &X);

    int stage = 1; 
    int count = 1; 

    while (count < X) {
        stage++;
        count += stage;
    }

    count -= stage;

    int boonmo, boonja;
    if (stage % 2 == 0) {
        boonja = X - count;
        boonmo = stage + 1 - boonja;
    }
    else {
        boonmo = X - count;
        boonja = stage + 1 - boonmo;
    }

    printf("%d/%d", boonja, boonmo);
    return 0;
}