#include<iostream>
#include<string>
using namespace std;

int main()
{
    // Task -1 ->  Declared an empty string
string s=""; 

// Task -2 -> Assigned the empty string with value "Universe"

s="Universe";

// Task-3 -> Print the length of the string
cout<<s.length()<<endl;

// Task-4 -> Add new element at the end of string with value 'a'
s.push_back('a');

// Task -5 -> Print the updated string
cout<<s<<endl;

// Task -6 -> Print the string in the reverse order
for(int i=s.length()-1;i>=0;i--)
{
    cout<<s[i];
}

return 0;

}