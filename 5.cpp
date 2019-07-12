#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    clock_t tStart = clock();
    int num;
    for (num = 2520; true; num = num + 20)
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
                    printf("Time taken: %.4fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC);
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