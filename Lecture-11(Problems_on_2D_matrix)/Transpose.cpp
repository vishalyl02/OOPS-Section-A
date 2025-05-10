#include<iostream>
using namespace std;

int main()
{
    // Task -1 -> Declaring a 2D array of size 3*3
    int arr[3][3];

    //Task -2 -> Taking input from user
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
// Task -3 -> Applying a transpose on the matrix 
// Create an other 2d array of same size 3*3

int arr1[3][3];
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        arr1[i][j]=arr[j][i];
    }
}

// Task -4 -> Print the transpose matrix

for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        cout<<arr1[i][j]<<" ";
    }
    cout<<endl;
}

return 0;

}