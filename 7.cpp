#include <iostream>

using namespace std;

int get10001stPrimeMethod(int limit)
{

    int num[limit + 1] = {};
    for (int i = 0; i <= limit; i++)
    {
        num[i] = i;
    }

    for (int i = 2; i <= limit; i++)
    {
        if (num[i] != 0)
        {
            for (int j = i; j + i <= limit; j = j + i)
            {
                num[j + i] = 0;
            }
        }
    }
    int count = 0;

    for (int i = 2; i <= limit; i++)
    {

        if (num[i] != 0)
        {
            count = count + 1;
            if (count == 10001)
            {
                cout << num[i] << endl;
            }
        }
    }
}

int main()
{

    get10001stPrimeMethod(1000000);
    return 0;
}