#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long int a,b,c,d;
    cin>>a>>b>>c;
    d=0;
    while(c)
    {
        d=d+(a*c);
        c--;
    }
    if((d-b)>0)
    cout<<d-b;
    else
    cout<<"0";
    return 0;
}