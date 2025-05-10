#include<iostream>
#include<string>
using namespace std;

int calculate(string s)
{

int count=0;

for(int i=0;i<s.length();i++)
{
    if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
    count++;
    if(s[i]=='a'||s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
    count++;
}

return count;
}



int main()
{

    string s;
    cin>>s;

    int vowel_count=calculate(s);
    cout<<vowel_count<<endl;


}