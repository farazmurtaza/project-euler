#include <iostream>

using namespace std;

int main()
{

    int first = 0;
    int second = 1;
    int fib = 0;
    int sum = 0;

    while (fib < 4000000)
    {
        fib = first + second;
        first = second;
        second = fib;
        if (fib < 4000000)
        {
            if (fib % 2 == 0)
            {
                sum += fib;
            }
        }
    }
    cout << sum << endl;
    return 0;
}