#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long a,b,c;
    cin>>a>>b;
    if(a==b)
    {
        cout<<"0";
        return 0;
    }
    c=b/a;
    if((c*a)!=b)
    {
        cout<<"-1";
        return 0;
    }
    int count=0;
    while(c!=1)
    {
        if(c%2==0)
        c/=2;
        else if(c%3==0)
        c/=3;
        else
        {
            cout<<"-1";
            return 0;
        }
        if(c!=0)
        count++;
    }
    cout<<count;
    return 0;
}