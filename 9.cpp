#include <iostream>

using namespace std;

int main()
{
    long sum = 0;
    int limit = 2000000;
    int num[limit + 1] = {};
    for (int i = 0; i < limit; i++)
    {
        num[i] = i;
    }

    for (int i = 2; i < limit; i++)
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
            sum = sum + num[i];
            cout << num[i] << endl;
        }
    }
    cout << sum << endl;
    return 0;
}