#include<iostream>
using namespace std;

class Dconstructor
{
    private:
    int *data;

    public:
    Dconstructor(int value)
    {
        data=new int(value);
        cout<<"Dynamic Constructor called: "<<endl;
    }
    void display()
    {
        cout<<"Value is: "<<*data<<endl;
    }

    ~Dconstructor()
    {
        delete data;
        cout<<"Destructor called"<<endl;
    }
};

int main()
{
    Dconstructor obj1(10);
    obj1.display();
    return 0;
}