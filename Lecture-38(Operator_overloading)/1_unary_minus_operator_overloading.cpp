#include<iostream>
using namespace std;

class Number
{
    int value;
    public:
    Number(int v=0)
    {
        value=v;
    }
    // Overload minus operator
    Number operator -()
    {
        return Number(-value);
    }
    void display()
    {
        cout<<"Value is: "<<value<<endl;
    }
};

int main()
{
    Number n1(10);
    Number n2=-n1;
    n2.display();
    return 0;
}