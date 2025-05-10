#include<iostream>
using namespace std;

class Base
{
    public:
    void show(int i){
        cout<<" I am Integer "<<i<<endl;
    }
    void show(double b)
    {
        cout<<"I am double "<<b<<endl;
    }
    void show(char ch)
    {
        cout<<"I am character "<<ch<<endl;
    }
    void show( string s)
    {
        cout<<" I am string "<<s<<endl;
    }
};
int main()
{
    Base b1;
    b1.show(2);
    b1.show("hello");
    b1.show('A');
    b1.show(2.3);
    return 0;
}