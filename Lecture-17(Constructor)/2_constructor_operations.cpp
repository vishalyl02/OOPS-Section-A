#include<iostream>
using namespace std;

class bank
{
    private:
    int acc_no;
    int balance;

    public:
    bank()
    {
        acc_no=12345;
        balance=0;
    }

    ~bank()  // tilde sign (~)
    {
        cout<<"My memory is cleared"<<endl;
    }

    void show_balance()
    {
        cout<<"Your balance is "<<balance<<endl;
    }

    void withdrawl(int amount)
    {
balance-=amount;
cout<<"Your withdrwal amount is"<< amount<<" and total balance is "<<balance<<endl;
    }

    void credit(int amount)
    {

        balance+=amount;
        cout<<"Your credited amount is "<<amount<<" and total balance is "<<balance<<endl;
    }

};

int main()
{
bank b1;

b1.show_balance();
b1.credit(100);
b1.credit(500);
b1.credit(1000);
b1.credit(10000);
b1.withdrawl(5000);
b1.withdrawl(4000);
b1.credit(500);
b1.withdrawl(1000);
b1.show_balance();
return 0;

}