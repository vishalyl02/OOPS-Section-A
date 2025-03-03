#include<iostream>
#include<string>
using namespace std;


class game
{
public:
string name;
int health;
char level;

void fight(int op_health,char lvl)
{
    if(op_health==health)
    {
        if(lvl>level)
        health-=5;
        else
        health+=5;
    }
    else if(op_health>health)
    {
        health-=5;
    }
    else
    {
        health+=5;
    }
}

void winner(int op_health)
{
if(op_health>health)
cout<<"Opponent is winner"<<endl;
else if(op_health==health)
cout<<"Game is tie"<<endl;
else
cout<<"You won"<<endl;

}
};
int main()
{
    game g1;
    cin>>g1.name>>g1.health>>g1.level;

    g1.fight(60,'A');

    g1.fight(80,'B');

    g1.fight(50,'C');

    g1.fight(90,'F');

    g1.winner(80);

return 0;

}