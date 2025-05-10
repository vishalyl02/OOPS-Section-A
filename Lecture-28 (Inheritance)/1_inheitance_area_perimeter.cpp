#include<iostream>
using namespace std;

class shape
{
    public:
    int side=100;
};

class square :public shape
{
public:

void area()
{
    cout<<side*side<<endl;
}

void perimeter()
{
    cout<<4*side<<endl;
}
};

int main()
{
    square s2;
    // cin>>s2.side;
    s2.area();
    s2.perimeter();
    return 0;
}