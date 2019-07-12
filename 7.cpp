#include <iostream>
#include <time.h>

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
                return 1;
            }
        }
    }
}

int main()
{
    clock_t tStart = clock();
    int x = get10001stPrimeMethod(1000000);
    printf("Time taken: %.4fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC);
    return 0;
}