#include<iostream>
using namespace std;

int main()
{
int arr[6];   // Declared an array of size 6
int size=sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<size;i++)
{
cin>>arr[i];   // Input from the user
}
for(int i=0;i<size;i++)
{
    cout<<arr[i]<<" ";    // Print the individual elements 
}
return 0;
}