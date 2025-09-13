#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct input
{
	int len;
	char world[60];
};

int compare(const void* a, const void* b)
{
	struct input  num1 = *(struct input*)a;
	struct input  num2 = *(struct input*)b;

	if (num1.len < num2.len)
		return -1;
	else if (num1.len > num2.len)
		return 1;
	else
		return strcmp(num1.world, num2.world);
}

struct input world[30000];
int main()
{
	int N;
	int i;

	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf("%s", world[i].world);
		world[i].len = strlen(world[i].world);

	}

	qsort(world, N, sizeof(struct input), compare);

	for (i = 0; i < N; i++)
	{
		if (strcmp(world[i].world, world[i + 1].world) != 0)
			printf("%s\n", world[i].world);
	}
	return 0;
}