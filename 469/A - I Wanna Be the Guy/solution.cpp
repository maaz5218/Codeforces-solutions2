#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int> vec(n,0);
    int a,b;
    cin>>a;
    while(a--)
    {
        cin>>b;
        vec[b-1]=1;
    }
    cin>>a;
    while(a--)
    {
        cin>>b;
        vec[b-1]=1;
    }
    for(int i=0;i<n;i++)
    {
        if(vec[i]==0)
        {
           cout<<"Oh, my keyboard!"<<endl;
           vec.clear();
           exit(0);
        }
    }
    vec.clear();
    cout<<"I become the guy."<<endl;
    return 0;
    
}