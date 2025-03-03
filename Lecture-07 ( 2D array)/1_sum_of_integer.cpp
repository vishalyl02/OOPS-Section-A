#include<iostream>
using namespace std;
int main()
{
int number;
cin>>number;   // Taking the input
int sum=0;
while(number>0)  // condition check of while loop
{
int rem=number%10;    // calculating the remainder
sum=sum+rem;         // adding the remainder to sum
number=number/10;    //dividing the number by 10
}
cout<<sum<<endl;
return 0;
}