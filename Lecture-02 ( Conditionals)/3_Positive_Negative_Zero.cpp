#include<iostream>
using namespace std;

int main()
{
int number;
cin>>number;

if(number>0)
cout<<number<<" is Positive"<<endl;
else if(number<0)
{
    cout<<number<<" is Negative"<<endl;
}
else
cout<<number<<" is zero"<<endl;

return 0;
}