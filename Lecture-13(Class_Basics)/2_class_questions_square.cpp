#include<iostream>
#include<string>
using namespace std;

// Task -1 -> To create a class Square
class Square
{
    public: 
    int side;
// Function to calculate area
    int area(int side)
    {
        int ar=side*side;
        return ar;
    }
// Function to calculate perimeter
    int perimeter(int side)
    {
        int prm=4*side;
        return prm;
    }

};


int main()
{

Square s1;

cin>>s1.side;

cout<<"Area is "<<s1.area(s1.side)<<endl;
cout<<"Perimeter is "<<s1.perimeter(s1.side)<<endl;
return 0;

}
