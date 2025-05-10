#include<iostream>
using namespace std;

class Distance
{
 int meters;
 public:

 Distance(int m)
 {
    meters=m;
 }
 void display()
 {
    cout<<"Meters"<<" "<<meters<<endl;
 }

};

int main()
{
    int x=10;
    Distance d=x;
    d.display();
    return 0;
}