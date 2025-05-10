#include<iostream>
using namespace std;

int main()
{

    
    int n;
    cin>>n; // User input for size

    int arr[n];  // Array declaration of user input size

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];  // Input for the array
    }

    int freq[10001];  // Frequency array

    for(int i=0;i<=10000;i++)
    {
        freq[i]=0;   // Assigning the frequency array with value 0
    }

    for(int i=0;i<n;i++)
    {
        freq[arr[i]]++;  // Storing the frequency of each element 
    }

    for(int i=0;i<=10000;i++)
    {
        if(freq[i]>0)
        cout<<i<<" "<<freq[i]<<endl;  // Printing the frequency of elements of array
    }

return 0;

}