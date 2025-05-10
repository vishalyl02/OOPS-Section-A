// Multi level Inheritance
#include<iostream>
using namespace std;

class Vehicle
{
public:
void type()
{
    cout<<"This is a Vehicle"<<endl;
}
};

class Car :public Vehicle
{
    public: 
    void brand(){
        cout<<"Brand is : Mahindra"<<endl;
    }
};

class ElectricCar : public Car
{

    public:
    void battery()
    {   
        cout<<"Battery 60KWH"<<endl;
    }
};
int main()
{
    ElectricCar E1;
    E1.type();
    return 0;
}