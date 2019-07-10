#include <iostream>

using namespace std;

int getSumMultiplesThreeAndFive(int limit)
{
    int sum = 0;
    for (int i = 1; i < limit; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            sum = sum + i;
        }
    }
    return sum;
}

int main()
{

    int product = getSumMultiplesThreeAndFive(1000);
    cout << product << endl;
    return 0;
}