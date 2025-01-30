#include<iostream>

using namespace std;
int main()
{

// Printing Even Numbers in range of 1 to 100.

int i=1;          // Initialisation

while(i<=100)        // Condition
{
if(i%2==0)      
cout<<i<<" ";
i=i+1;              // updation
}

return 0;
}