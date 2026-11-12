#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a;
    cin>>a;
    vector<int>v(a);
    vector<int>v1(a);
    for(int i=0;i<a;i++)
    cin>>v[i];
    for(int i=0;i<a;i++)
    {
    v1[v[i]-1]=i+1;
    }
    for(int i=0;i<a;i++)
    cout<<v1[i]<<" ";
    return 0;
}