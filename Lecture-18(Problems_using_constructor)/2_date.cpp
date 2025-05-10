// 8. Write a C++ program to implement a class called Date 
// that has private member variables for day, month, and year. 
// Include member functions to set and get these variables, 
// as well as to validate if the date is valid.

#include<iostream>
using namespace std;

class Date
{
private:
int date;
int month;
int year;
public:
 Date()
{
    date=0;
    month=0;
    year=0;
}
void takedata()
{
cin>>date>>month>>year;
}

void isvalid()
{
if((date<=31 &&date>=1) &&(month<=12 && month>=1) && (year>=0))
{
    if(month==2 && date>29)
    cout<<"Invalid data"<<endl;
    else
    cout<<"valid data"<<endl;
}
else
cout<<"Invalid Data"<<endl;

}
};

int main()
{
Date d1;
d1.takedata();
d1.isvalid();
return 0;
}