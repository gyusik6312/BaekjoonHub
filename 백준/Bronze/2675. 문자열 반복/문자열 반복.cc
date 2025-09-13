#include <stdio.h>
#include <string.h>

int main()
{
    int T;
    char S[20];
    int R;
    int i, j, o;
    char P[160];
    int size;
    int temp;

    scanf("%d", &T);
    for (i = 0; i < T; i++)
    {
        temp = 0;
        scanf("%d %s", &R, S);
        size = strlen(S);

        for (j = 0; j < size; j++)
        {
            for (o = 0; o < R; o++)
            {
                P[temp] = S[j];
                temp += 1;
            }
        }
        P[temp] = NULL;
        printf("%s\n", P);
    }

    return 0;
}