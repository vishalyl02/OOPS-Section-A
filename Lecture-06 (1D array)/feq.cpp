#include<iostream>
using namespace std;

int main()
{

int n;
cin>>n;  // Input for array size

int arr[n]; // array declaration of size n
 
for(int i=0;i<n;i++)
{
    cin>>arr[i];  // Input for each element in array
}

int freq[10001];  // Declaring a frequency array

for(int i=0;i<=10000;i++)
{
    freq[i]=0;    // Putting all frequency array to be 0
}
// Calculating the frequency of each element

for(int i=0;i<n;i++)
{
    freq[arr[i]]++;
}

for(int i=0;i<=10000;i++)   // Using for loop to print the frequency of each element of array
{
    if(freq[i]>0)
    cout<<i<<" -> "<<freq[i]<<endl;
}

return 0;

}