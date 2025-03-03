#include<iostream>
#include<string>

using namespace std;
class car
{

    public:
    string name;
    int price;
    int year;
    string company;

};

int main()
{

    car c1;
    c1.name="Thar";
    c1.price=1600000;
    c1.year=2010;
    c1.company="Mahindra";
    car c2;
    
    c2.name="Scorpio";
    c2.price=1362000;
    c2.year=2002;
    c2.company="Mahindra";

    car c3;

    c3.name="Mercedes";
    c3.price=4605000;
    c3.year=1994;
    c3.company="Mercedes-Benz-Group";

    cout<<c1.name<<" "<<c1.price<<" "<<c1.year<<" "<<c1.company<<endl;
    cout<<c2.name<<" "<<c2.price<<" "<<c2.year<<" "<<c2.company<<endl;
    cout<<c3.name<<" "<<c3.price<<" "<<c3.year<<" "<<c3.company<<endl;

    return 0;

}