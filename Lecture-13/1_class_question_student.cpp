#include<iostream>
#include<string>
using namespace std;

// Task -1 -> Creating the class student
class Student{

    // Task -2 -> Members creation 
    public:
    string name;
    int age;
    int roll_no;
    char section;

};

int main()
{
    // Task -3 ->Object Creation

Student s1,s2;

// Input Taken
cin>>s1.name>>s1.age>>s1.roll_no>>s1.section;
cin>>s2.name>>s2.age>>s2.roll_no>>s2.section;


// Task -4 -> 

cout<<s1.name<<" "<<s1.age<<" "<<s1.roll_no<<s1.section<<endl;
cout<<s2.name<<" "<<s2.age<<" "<<s2.roll_no<<" "<<s2.section<<endl;

return 0;
}