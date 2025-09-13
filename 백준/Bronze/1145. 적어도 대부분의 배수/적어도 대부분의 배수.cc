#include <iostream>
using namespace std;

int main()
{
	int array[5];
	int i;
	int j;
	int count;
	int answer = 0;

	for (i = 0; i < 5; i++)
		cin >> array[i];

	while (1)
	{
		count = 0;
		answer++;

		for (j = 0; j < 5; j++)
		{
			if (answer % array[j] == 0)
				count++;
		}

		if (count >= 3)
			break;
	}

	cout << answer;
}