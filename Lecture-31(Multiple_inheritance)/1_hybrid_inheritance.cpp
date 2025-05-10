
#include<iostream>
using namespace std;

class Person
{
    public:
    void showPerson()
    {
        cout<<"I am a person"<<endl;
    }
};
class Employee : public Person
{
public:
void work()
{
    cout<<"I work in a company"<<endl;
}
};

class Student :  public Person
{
public:
void learn()
{
    cout<<"I study at a university"<<endl;
}
};

class Intern : public Employee , public Student
{
    public:
    void Internship()
    {
        cout<<"I am doing Internship"<<endl;
    }
};

int main()
{
    Intern i;
//    i.showPerson();
    i.work();
    i.learn();
    i.Internship();
    return 0;
}