#include<iostream>
using namespace std;

class Shape
{

public:
virtual void draw()
{
    cout<<"Drawing a Shape"<<endl;
}
};
class Circle :public Shape
{
public:
void draw() override
{cout<<"Drawing a Circle"<<endl;
}
};

int main()
{
    Shape *s;
    Circle c;
    s=&c;

    // s->draw(); // Calls Circle's draw at 
 //   runtime
    return 0;
}
