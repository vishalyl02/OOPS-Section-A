#include<iostream>
using namespace std;

class Person
{
    public:
    void show_identity()
    {
        cout<<"I am a person"<<endl;
    }
};
class student :public Person
{
    public:
    void study()
    {
        cout<<"I study in college"<<endl;
    }
};
class Teacher : public Person
{

    public:
    void teach()
    {
        cout<<"I teach in college"<<endl;
    }
};

int main()
{
    student s1;
    Teacher t1;
    s1.show_identity();
    s1.study();
    t1.show_identity();
    t1.teach();
return 0;
}