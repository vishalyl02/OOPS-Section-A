#include<iostream>
using namespace std;

class Distance
{
    int metres;
    public:
    Distance(int m)
    {
        metres=m;
    }
    operator int()
    {
        return metres;
    }
};

int main()
{
    Distance d(20);
    int x=d;
    cout<<"Value in metres "<<x<<endl;
    return 0;
}