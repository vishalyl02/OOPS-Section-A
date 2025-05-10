
#include<iostream>
using namespace std;

class operation
{

    private:
    int n1,n2;

    public:
// default constructor
    operation()
    {
        n1=1;
        n2=2;
    }

    // parameterised constructor
    operation(int num1,int num2)
    {
        n1=num1;
        n2=num2;
    }

    operation add(operation obj)
    {
        operation obj1;
        obj1.n1=obj.n1+n1;
        obj1.n2=obj.n2+n2;
        return obj1;
    }
    void print_data()
    {
    cout<<n1<<" "<<n2<<endl;
    }
};

int main()
{
operation op1(100,200);
operation op2;
operation op3=op1.add(op2);

op3.print_data();
return 0;
}