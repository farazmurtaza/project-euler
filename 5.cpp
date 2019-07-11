#include <iostream>

using namespace std;

int main()
{

    int num;
    for (num = 2520; true; num++)
    {
        int count = 0;
        for (int i = 20; i > 0; i--)
        {

            if (num % i == 0)
            {
                count++;
                if (count == 20)
                {
                    cout << num << endl;
                    return 0;
                }
            }
            else
            {
                break;
            }
        }
    }
    cout << num << endl;
    return 0;
}