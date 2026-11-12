#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    int a,b;
    cin>>n>>a>>b;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    cin>>v[i];
    for(int i=0;i<n;i++)
    {
        bool flag=true;
        for(int j=i-a;j<i && j>=0 ;j++)
        {
            if(v[j]<v[i])
            {
                flag=false;
            }
        }
        if(flag)
        for(int j=i+1;j<=i+b && j<n;j++)
        {
             if(v[j]<v[i])
            {
                flag=false;
            }
        }
        if(flag)
        {
            cout<<i+1;
            return 0;
        }
        
    }
    return 0;
}