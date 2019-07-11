#include <iostream>

using namespace std;

int main()
{
    int sumOf100Numbers = 0;
    int squaredSumOf100Numbers = 0;
    int sumOf100NumbersSquared;
    for (int i = 1; i <= 100; i++)
    {
        sumOf100Numbers += i;
        squaredSumOf100Numbers = squaredSumOf100Numbers + i * i;
    }

    sumOf100NumbersSquared = sumOf100Numbers * sumOf100Numbers;

    int difference = sumOf100NumbersSquared - squaredSumOf100Numbers;

    cout << difference << endl;
    return 0;
}