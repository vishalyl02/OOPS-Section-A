// Copy Constructor

#include<iostream>
using namespace std;

class school
{

    private:
    string name;
    int year;
    int courses;

    public:

    // default contructor
    school()
    {
        ;
    }

    // parametrized constructor
    school(string nm,int yr,int crs)
    {
        name=nm;
        year=yr;
        courses=crs;
    }
    // copy constructor
    school(school &obj)
    {
        name=obj.name;
        year=obj.year;
        courses=obj.courses;
    }

    // Print data
    void print_data()
    {
        cout<<name<<" "<<year<<" "<<courses<<endl;
    }

};

int main()
{
    school s3;
school s1("hello",2010,10);
school s2(s1);
s1.print_data();
s2.print_data();
return 0;

}