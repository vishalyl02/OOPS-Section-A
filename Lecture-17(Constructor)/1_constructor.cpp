#include<iostream>
using namespace std;

class bank
{

    public: // Access specifier -> only accessed inside the clas
    int acc_no;
    int balance;

   

    bank()
    {
        acc_no=1234567890;
        balance=0;
    }
};

int main()
{
    bank b1;  // Object is created of class bank
    cout<<b1.acc_no<<" "<<b1.balance<<endl;
    return 0;
}