#include<iostream>

using namespace std;

int main()
{
int n;
cin>>n;

int i=1;      // Initialisation
while(i<=n)    // Condition
{
    cout<<i<<" ";     // Task -> Printing the number from 1 to N
    i=i+1;        // Updation -> i=i+1;
}

return 0;
}