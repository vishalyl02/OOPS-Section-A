// friend class

#include<iostream>
using namespace std;

class book
{
    private:
    string name;
    int pages;
    int chps;


    public:
    // default constructor
    book()
    {
    name="Hello";
    pages=1;
    chps=1;
    }
    // parametrised constructor
    book(string nm,int pgs,int c)
    {
        name=nm;
        pages=pgs;
        chps=c;
    }

    friend class chapter;
};

class chapter
{
    public:
    void print_data(book &b)
    {
        cout<<b.name<<" "<<b.pages
        <<" "<<b.chps<<endl;
    }
};
int main()
{
    book b1("marigold",100,10);
    chapter c;
    c.print_data(b1);
    return 0;
}

