#include <stdio.h>
#include <string.h>
int main()
{
	char world[1000];
	int count;
	int i;

	scanf("%d", &count);
	for (i = 0; i < count; i++)
	{
		scanf("%s", world);
		printf("%c%c\n", world[0], world[strlen(world) - 1]);
	}

	return 0;
}