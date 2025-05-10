
// PASSING OBJECT AS AN ARGUMENT
#include<iostream>
using namespace std;
class calculate
{
    private:
    int num1,num2;
    public:
    // default constructor
    calculate() 
    {
        num1=2;
        num2=3;
    }
    // parametrised constructor
    calculate(int n1,int n2)
    {
        num1=n1;
        num2=n2;
    }

    int add(calculate obj)
    {
        int ans=num1+num2+obj.num1+obj.num2;
        return ans;
    }

    int subtract(calculate obj)
    {
        int res=abs((num1+num2)
        -(obj.num1+obj.num2));
        return res;
    }

    int multiply(calculate obj)
    {
        int val=(num1+num2)*(obj.num1+obj.num2);
        return val;
    }
};

int main()
{
calculate c1(10,20);
calculate c2;

int ans1=c1.add(c2);
int ans2=c2.subtract(c1);

cout<<ans1<<" "<<ans2<<endl;
return 0;

}