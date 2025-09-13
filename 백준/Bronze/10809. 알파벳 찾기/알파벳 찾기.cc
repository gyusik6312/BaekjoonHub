#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    int count[26];
    int i;

    for(i = 0; i < 26; i++)
        count[i] = -1;
    scanf("%s", s);

    for(i = 0; i < strlen(s); i++)
    {
        if(count[s[i] - 'a'] == -1)
            count[s[i] - 'a'] = i;
    }

    for(i = 0; i < 26; i++)
        printf("%d ", count[i]);

    return 0;
}