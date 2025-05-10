#include<iostream>
#include<string>
using namespace std;
class bank
{
    private:
    int acc_no;
    int balance=0;
    string name;
	int id=12345;

	
    public:


	



    bank()
    {
        acc_no=0;
        balance=0;
        name="Hello";
    }
    void withdrawl(int amount)
    {
        balance-=amount;
        cout<<"Your withdrawl balance is"<<amount<<" and net balance is "<<balance<<endl;
    }
    void credit(int amount)
    {
        balance+=amount;
        cout<<"Your credited amount is"<<amount<<" and net balance is "<<balance<<endl;
    }
    void check_balance()
    {
        cout<<"Your total balance is "<<balance<<endl;
    }
};
int main()
{
  
    bank b1;
    b1.credit(1000);
    b1.credit(10000);
    b1.withdrawl(100);
    b1.credit(1);
    b1.check_balance();
    return 0;
}