#include<iostream>
using namespace std;

int main()
{
//Task -1 -> Taking input for row and column and declare an array 
int row,column;
cin>>row>>column;
int arr[row][column];

// Task- 2 -> Taking input from the user
for(int i=0;i<row;i++)
{
    for(int j=0;j<column;j++)
    {
        cin>>arr[i][j];
    }
}
// Task -3  ->  Printing the matrix in reverse order
cout<<endl;
cout<<"Printing of the matrix in reverse order "<<endl;
cout<<endl;
for(int i=0;i<row;i++)
{
    for(int j=column-1;j>=0;j--)
    {
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}

return 0;
}