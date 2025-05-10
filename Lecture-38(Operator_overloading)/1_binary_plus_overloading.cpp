// Operator overloading Binary Plus operator
#include<iostream>
using namespace std;

class Complex
{
    float real,imag;

    public:
    Complex(float r=0,float i=0) // parametrised constructor
    {
        real=r;
        imag=i;
    }
    Complex operator +(const Complex &obj)
    {
        Complex obj1;
        obj1.real=real+obj.real;
        obj1.imag=imag+obj.imag;
        return obj1;
    }
    void display()
    {
        cout<<real<<" + "<<imag<<"i"<<endl;
    }
};

int main()
{
    Complex c1(2,3);
    Complex c2(3,4);
    Complex c3=c1+(c2);
    c3.display();
    return 0;
}