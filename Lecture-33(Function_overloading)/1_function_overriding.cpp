#include<iostream>
using namespace std;

class Base
{
    public:
    virtual void show()
    {
        cout<<"Base class"<<endl;
    }
};
class derived: public Base
{
public:
void show() override
{
cout<<"Derived class"<<endl;
}
};

int main()
{
    Base b1;
    derived d1;
    // b1.show();
    d1.show();
    return 0;
}