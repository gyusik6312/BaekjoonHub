#include <iostream>
using namespace std;

int add(int number)
{
	return (number / 10) + (number % 10);
}

int main()
{
	int tries = 0;
	int number;
	int change;
	int temp;

	cin >> number;

	change = number;

	if ((change < 10) && change != 0)
	{
		change *= 10;
		temp = add(change);
		change = (number % 10) * 10 + (temp % 10);

		tries++;
	}

	do
	{
		temp = add(change);
		change = (change % 10) * 10 + (temp % 10);

		tries++;

	} while (change != number);

	cout << tries;
}