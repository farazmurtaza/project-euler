#include <iostream>

using namespace std;

int checkPalindrome(int x)
{
    int actual = x;
    int result = 0;
    while (x > 0)
    {
        result = result * 10 + x % 10;
        x = x / 10;
    }
    if (actual == result)
    {
        return actual;
    }
    return 0;
}

int main()
{

    int result;
    int x = 0;
    for (int i = 999; i > 0; i--)
    {
        for (int j = 999; j > 0; j--)
        {
            int product = i * j;
            result = checkPalindrome(product);
            if (result != 0 && result > x)
            {
                x = result;
            }
        }
    }

    cout << x << endl;
    return 0;
}