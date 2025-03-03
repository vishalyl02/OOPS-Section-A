#include <iostream>

using namespace std;

int main()
{

    for (int i = 1; i <= 100; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)    // Condtions to check divisible by 3 and 5
            cout << i << " ";
    }
    return 0;
}
