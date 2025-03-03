#include<bits/stdc++.h>

using namespace std;

int main()
{
                //  N=3   { 1,2} 
int x,y;
int n;  // N pairs
cin>>n;

map<int,vector<int>>mp;
for(int i=0;i<n;i++)
{
    cin>>x>>y;

    mp[x].push_back(y);
    mp[y].push_back(x);
}


for(auto p:mp)
{

    cout<<p.first<<" -> ";
    for(auto it:p.second)
    {
        cout<<it<<" ";
    }
cout<<endl;
}


return 0;

}


















