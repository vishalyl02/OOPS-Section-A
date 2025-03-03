#include<bits/stdc++.h>
using namespace std;

int main(){

int n,x,y;
cin>>n;
map<int,vector<int>>mp;
for(int i=0;i<n;i++)
{
cin>>x>>y;
mp[x].push_back(y);
mp[y].push_back(x);
}

    queue<int>q;
    q.push(1);

    vector<int>visit(1000);

    while(q.size()>0)
    {
        int p=q.front();
        q.pop();
        visit[p]=1;
        cout<<p<<" ->";
        for(auto it:mp[p])
        {
            if(visit[it]!=1)
            {
                cout<<it<<" ";
                q.push(it);
            }
        }
cout<<endl;
    }

return 0;

}
