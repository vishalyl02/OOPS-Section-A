// 6. Write a C++ program to create a class called Triangle 
//that has private member variables for the lengths of its three sides.
//  Implement member functions to determine if the triangle 
//  is equilateral, isosceles, or scalene.

#include<iostream>
using namespace std;

class Triangle
{
    private:
    int side1,side2,side3;

    public:
    Triangle()
    {
        side1=0,side2=0,side3=0;
    }
    void takedata()
    {
        cin>>side1>>side2>>side3;
    }
    void triangletype()
    {
        if((side1==side2) && (side2==side3))// side1==side2==side3
        cout<<"Equilateral Triangle"<<endl;
        else if(side1==side2 || side2==side3 || side1==side3)
        cout<<"Isosceles Triangle"<<endl;
        else
        cout<<"Scalene Triangle"<<endl;
    }
};
int main()
{
Triangle t1;
t1.takedata();
t1.triangletype();
return 0;
}