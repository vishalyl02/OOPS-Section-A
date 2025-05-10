#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int n,x;
    cin>>n;
    vector<int>v1;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v1.push_back(x);
    }
int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(v1[i]==v1[j])
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
