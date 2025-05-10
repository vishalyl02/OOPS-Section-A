#include<iostream>
using namespace std;

class Length
{
int meters;

public:
Length(int m)
{
    meters=m;
}
int getmeters()
{
    return meters;
}
};

class Distance
{

    int km;
    public:
    Distance(Length l)
    {
        km=l.getmeters()/1000;
    }

    void display()
    {
        cout<<"Distance in Km "<<km<<endl;

    }
};

int main()
{
    Length l1(5000);
    Distance d=l1;
    d.display();
    return 0;
}