#include<iostream>
using namespace std;

class DeepCopy
{
public:
int *data;
DeepCopy(int val)
{
    data=new int(val);
}
DeepCopy(DeepCopy &obj1)
{
    data=new int(*obj1.data);
    // Allocatig new memory and copying value
}

void display()
{
    cout<<*data<<endl;
}
};

int main()
{
    DeepCopy obj1(10);
    DeepCopy obj2(obj1);// DeepCopy obj2=obj1;
    cout<<"Before Modification"<<endl;
    obj1.display();
    obj2.display();
    cout<<"After Modification"<<endl;
    *obj1.data=30;
    obj1.display();
    obj2.display();
    return 0;
}

