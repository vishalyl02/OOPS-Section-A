#include<iostream>
using namespace std;

int main()
{

int num1,num2;   // Declaring two integer variables
cin>>num1>>num2;  // Taking Input from user

if(num1>num2)    // Condition for num1 greater
{
    cout<<num1<<" is greater"<<endl;
}
else if(num2>num1)   // Condition for num2 greater
{
    cout<<num2<<" is greater"<<endl;
}
else   // Condition for both number equal
{
    cout<<"Both numbers are equal"<<endl;
}
return 0;
}