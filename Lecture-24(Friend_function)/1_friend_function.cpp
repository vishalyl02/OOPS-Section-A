#include<iostream>
using namespace std;
class solve
{
private:
int num1,num2;
friend int multiply(solve);
public:
solve()
{
    num1=1;
    num2=2;
}
solve(int p,int q)
{
    num1=p;
    num2=q;
}
solve(solve &s)
{
    num1=s.num1;
    num2=s.num2;
}
};
int multiply(solve s1)
{
    int val=s1.num1*s1.num2;
    return val;
}
int main()
{
    solve s2;
    solve s3(s2),s4(100,200);
    cout<<multiply(s2)<<endl;
    cout<<multiply(s4)<<endl;
    return 0;
}