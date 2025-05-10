
#include<iostream>
using namespace std;

class triangle
{
    public:
    int side1,side2,side3;
};

class scalene:public triangle
{
    public:

    void print_valid()
    {
        if(side1!=side2 && side2!=side3)
        cout<<"This triangle is Scalene Triangle"<<endl;
        else
        cout<<"This triangle is not a scalene Triangle"<<endl;
    }
};

int main()
{
    scalene s1;
    cin>>s1.side1>>s1.side2>>s1.side3;

    s1.print_valid();
    return 0;
}