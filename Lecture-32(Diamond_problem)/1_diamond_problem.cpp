#include<iostream>
using namespace std;

class A
{
    public:
    void print_val()
    {
        cout<<"I am in class A"<<endl;
    }
};

class B:  public A{
    public:
    void print_data()
    {
        cout<<" This is class B"<<endl;
    }
};
class C:  public A{

    public:
    void print_members()
    {
        cout<<" This is class C"<<endl;
    }
};

class D: public B,public C
{
    public:
    void show_data()
    {
        cout<<"This is class D"<<endl;
    }
};

int main()
{

D d1;
d1.show_data();
d1.print_members();
d1.print_data();
// d1.print_val(); // -> it will show error due to diamond problem
return 0;

}