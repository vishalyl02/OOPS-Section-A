#include<iostream>
using namespace std;

class shape
{
private:
double radius,side,length,breadth;

public:

shape()
{
    radius=side=length=breadth=0;
}

void takedata()
{
    cin>>radius>>side>>length>>breadth;
}
void area_check()
{
    double a1=3.14*radius*radius;
    double a2=side*side;
    double a3=length*breadth;

    if(a1>a2 && a1>a3) 
    {
        cout<<"Larger area is of Circle that is "<<a1<<endl;
    }
    else if(a2>a3 && a2>a1)
    {
        cout<<"Larger area is of Square that is "<<a2<<endl;
    }
    else if(a3>a1 && a3>a2)
{
    cout<<"Larger area is of Rectangle that is"<<a3<<endl;
}
else
{
    cout<<"Circle area is "<<a1<<endl;
    cout<<"Rectangle area is"<<a2<<endl;
    cout<<"Square area is"<<a3<<endl;
}
}
};

int main()
{
    shape s1;
    s1.takedata();
    s1.area_check();
    return 0;
}