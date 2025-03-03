
#include <iostream>
using namespace std;
int main()
{
    int number;
    cin >> number;
    int p = 0;
    for (int i = 2; i <= number/2; i++)  // Loops from "2"  till "( Number-1)"
    {
        if (number % i == 0)
        {
            p = 1;
            break;
        }
    }
    if (p == 0)  // Condition if p is 0 or not
    {
        cout <<number<<" is Prime Number"<<endl;
    }
    else
    cout<<number<<" is Not a prime number"<<endl;
    return 0;
}