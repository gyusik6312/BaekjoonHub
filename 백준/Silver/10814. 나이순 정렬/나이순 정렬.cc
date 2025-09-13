#include <stdio.h>
#include <stdlib.h>

struct information
{
	int age;
	char name[200];
	int number;
};

int compare(const void* a, const void* b)
{
	struct information num1 = *(struct information*)a;
	struct information num2 = *(struct information*)b;

	if (num1.age < num2.age)
		return -1;
	else if (num1.age > num2.age)
		return 1;
	else
	{
		if (num1.number < num2.number)
			return -1;
		else
			return 1;
	}
}

struct information people[200000];
int main()
{
	int N;
	int i;
	
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf("%d %s", &people[i].age, people[i].name);
		people[i].number = i;
	}
	
	qsort(people, N, sizeof(struct information), compare);

	for (i = 0; i < N; i++)
		printf("%d %s\n", people[i].age, people[i].name);
	return 0;
}