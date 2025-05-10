#include<iostream>
using namespace std;

class Calculator
{

    public:
   int  add(int a,int b)
    {
return a+b;
    }

    float add(float a,float b)
    {
        return a+b;
    }
};

int main()
{
    Calculator calc;
    cout<<"Sum of integral values"<<
    calc.add(10,20)<<endl;
    cout<<"Sum of float values"<<
    calc.add(1.5f,2.3f)<<endl;
    return 0;
}