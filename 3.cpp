//not solved yet
#include <iostream>

using namespace std;

int main()
{

    long num = 600851475143;
    long j = 2;
    for (long i = num / j; i >= 2; j = j * 2)
    {
        cout << i << endl;
        if (num % i == 0)
        {
            cout << i << "is a factor" << endl;
        }
    }
    return 0;
}