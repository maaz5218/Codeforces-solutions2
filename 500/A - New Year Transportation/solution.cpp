#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b;
    cin>>a>>b;
    vector<int>v(a);
    v[0]=0;
    for(int i=1;i<a;i++)
    {
        cin>>v[i];
        v[i]=v[i]+i;
    }
bool flag=false;
vector<int>temp;
int i=1;
while(true)
{
    if(count(temp.begin(),temp.end(),i))
    {
        flag=false;
        break;
    }
    temp.push_back(i);
    i=v[i];
    if(i==b)
    {
        flag=true;
        break;
    }
    if(i==a)
    break;
}
    if(flag)
    cout<<"YES";
    else
    cout<<"NO";
    return 0;
}