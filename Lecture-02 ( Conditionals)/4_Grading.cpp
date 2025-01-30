#include<iostream>

using namespace std;


int main()
{

int marks;
cin>>marks;


if(marks>=90)
cout<<"Grade is A"<<endl;
else if(marks>=80 && marks<90)
cout<<"Grade is B"<<endl;
else if(marks>=70 && marks<80)
cout<<"Grade is C"<<endl;
else if(marks>=60 && marks<70)
cout<<"Grade is D"<<endl;
else
cout<<"Grade is E"<<endl;


return 0;
}