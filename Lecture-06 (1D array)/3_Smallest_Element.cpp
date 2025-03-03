#include<iostream>
#include<climits>

using namespace std;

int main()
{
    int n;
    cin>>n;

int arr[n];   // Declared an array of size n

for(int i=0;i<n;i++)
{
    cin>>arr[i];   // user Input 
}

int mn=INT_MAX;   // Assigning minimum element variable as integer maximum value that is  2147483647 
                 // Minumum element is     ( 2*10^31-1 )

for(int i=0;i<n;i++)
{
    if(arr[i]<mn)  // Checking the current element is smaller than minimum element variable 
    mn=arr[i];
}

cout<<"Minimum Element is: "<<mn<<endl;







}