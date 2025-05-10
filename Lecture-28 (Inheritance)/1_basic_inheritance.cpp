#include<iostream>
using namespace std;

class Animal
{
    public:
   void eat()
    {
       cout<<"Animal eats food"<<endl;
    }

    void move()
    {
        cout<<"Animal can change their location"<<endl;
    }
};

class Dog : public Animal
{

    public:
    void bark()
    {
        cout<<"Dog can bark"<<endl;
    }

    void bite()
    {
        cout<<"Dog can bite a human"<<endl;
    }
};

int main()
{
    Animal A1;
    A1.eat();
    A1.move();
    Dog D1;
    D1.bark();
    D1.eat();
    D1.move();
    return 0;
}
