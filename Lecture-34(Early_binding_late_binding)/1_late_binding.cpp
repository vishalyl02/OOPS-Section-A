#include<iostream>
using namespace std;

class Animal
{
    public:
    virtual void sound()
    {
        cout<<"Animal makes a sound"<<endl;
    }
};
class Dog:public Animal
{
public:
 void sound() override
 {
cout<<"Dog Barks"<<endl;
 }
};

class Cat: public Animal
{
    public:
    void sound() override
    {
        cout<<"Cat meows"<<endl;
    }
};

int main()
{
    Animal *a;
    Dog d;
    Cat c;
    a=&d;
    a->sound();
    return 0;
}