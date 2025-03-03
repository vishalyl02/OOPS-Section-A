#include<iostream>
#include<string>
using namespace std;

// Task -1 -> Creating a new class of name -> Score

class Score
{

    // Task -2 -> Data Memeber  a) Average b) Percentage c) Grade d) Total Score
     // e) Maths f) Science g) English h) Social Science i) Hindi

     public:
     int mths,scn,eng,ssn,hnd;

     int avg,pn,tscore=0;
     
     char grd;


    // Task -3 -> Member functions  a) To calculate average b) To calculate percentage
    // c) To calculate Total Score d) To calculate grade


    // To calculate average
    void avrg()
    {
           tscore=mths+scn+eng+ssn+hnd;
           float val=tscore;
            cout<<val/5<<endl;
    }
// To calculate percentage
    void perct()
    {
        float res=tscore;
        float p=res/500;
        cout<<p*100<<"%"<<endl;

    }

    // To calculate Total Score

    void total_score()
    {

        tscore=mths+scn+eng+scn+hnd;
        cout<<tscore<<endl;
    }

// To calculate grade

void calc_grade()
{
    if(tscore>=450)
cout<<"A Grade"<<endl;
else if(tscore>=400)
cout<<"B Grade"<<endl;
else if(tscore>=350)
cout<<"C Grade"<<endl;
else if(tscore>=300)
cout<<"D Grade"<<endl;
else if(tscore>=250)
cout<<"E Grade"<<endl;
else
cout<<"F Grade(Fail)"<<endl;

}
};



int main()
{
// Object creation of class
Score s1;

// taking input for all subjects marks

cin>>s1.mths>>s1.scn>>s1.eng>>s1.ssn>>s1.hnd;

cout<<"Total Score is "<<endl;
s1.total_score();
cout<<"Average is "<<endl;
s1.avrg();

cout<<"Percentage is"<<endl;
s1.perct();

cout<<"Grade is "<<endl;
s1.calc_grade();

return 0;
}








