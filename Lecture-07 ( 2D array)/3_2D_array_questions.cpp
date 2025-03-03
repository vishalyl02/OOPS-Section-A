#include<iostream>
using namespace std;
int main()
{
int arr[5][3];   // Declaring a 2D array of rows-> 5, columns->3
for(int i=0;i<5;i++)     // This loop is for rows 
{
for(int j=0;j<3;j++)     // This loop is for columns
{
    cin>>arr[i][j];  // Taking the input from user
}
}
for(int i=0;i<5;i++)
{
for(int j=0;j<3;j++)
{
cout<<arr[i][j]<<" ";
}
cout<<endl;
}
int row_sum=0;
for(int i=0;i<5;i++)
{
    
for(int j=0;j<3;j++)
{
row_sum+=arr[i][j];
}
cout<<row_sum<<endl;
}



return 0;


}
