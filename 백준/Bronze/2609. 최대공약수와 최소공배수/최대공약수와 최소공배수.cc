#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    int max;
    int min;
    int i;

    cin >> num1 >> num2;

    if(num1 > num2)
    {
        for(i = 1; i <= num1; i++)
        {
            if((num1 % i == 0) && num2 % i == 0)
            {
                max = i;
            }
        }
        for (i = num1; i <= num1 * num2; i++)
        {
            if ((i % num1 == 0) && (i % num2 == 0))
            {
                min = i;
                break;
            }
        }
    }

    else
    {
        for (i = 1; i <= num2; i++)
        {
            if ((num1 % i == 0) && num2 % i == 0)
            {
                max = i;
            }
        }
        for (i = num2; i <= num1 * num2; i++)
        {
            if ((i % num1 == 0) && (i % num2 == 0))
            {
                min = i;
                break;
            }
        }
    }

    cout << max << "\n" << min;
}