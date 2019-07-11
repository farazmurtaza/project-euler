#include <iostream>

using namespace std;

int main()
{
    //strategy: reverse, save, then compare
    int x = 91000000;
    int result = 0;
    while (x > 0)
    {
        result = result * 10 + x % 10;
        x = x / 10;
    }

    cout << result << endl;
    return 0;
}