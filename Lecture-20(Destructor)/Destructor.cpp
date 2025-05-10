#include<iostream>
using namespace std;

class subject
{
    public:
    subject()
    {
        cout<<"subject Constructor"<<endl;
    }
     ~subject(){
        cout<<"subject Destructor"<<endl;
    }
};
int main()
{
   subject s;
    return 0;
}



