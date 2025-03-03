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

int mx=INT_MIN;   // Assigning maximum element varible as integer minimum value that is  -2,147,483,648
// minimum value -> (-2*10^31 )

for(int i=0;i<n;i++)
{
if(arr[i]>mx)     // Checking the current element is greater than maximum element variable
mx=arr[i];
}

cout<<"Maximum Element is: "<<mx<<endl;



return 0;

}