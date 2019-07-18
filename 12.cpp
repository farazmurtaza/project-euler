#include <iostream>

using namespace std;

//76576500 : 576

int main()
{

    int sum = 0;
    int limit = 100000;
    int count = 0;
    int divisors = 0;
    for (int i = 1; i < limit; i++)
    {
        for (int j = i; j > 0; j--)
        {
            sum = sum + j;
        }

        for (int j = sum; j > 0; j--)
        {
            if (sum % j == 0)
            {
                divisors++;
                if (divisors > 500)
                {
                    cout << "This is the number " << sum << endl;
                    return 0;
                }
            }
        }
        cout << sum << ":" << divisors << endl;
        sum = 0;
        divisors = 0;
    }
    return 0;
}