#include<iostream>
using namespace std;

class Teacher
{
    public:
    void teach()
    {
        cout<<"Teaching students"<<endl;
    }
};
class Researcher 
{
public:
void research()
{
    cout<<"Conducting Research"<<endl;
}
};

class Professor : public Teacher, 
public Researcher
{
public:
void guide()
{
    cout<<"Guiding Students and research"<<endl;

}
};
int main()
{
    Professor p;
    p.teach();
    p.research();
    p.guide();
    return 0;

}

