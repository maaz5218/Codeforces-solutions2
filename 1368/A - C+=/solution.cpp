#include<bits/stdc++.h>
using namespace std;
void comp()
{
    long long int a,b,c;
    cin>>a>>b>>c;
    bool flag;
    if(a<b)
    flag=true;
    else
    flag=false;
    int count=0;
    while(a<=c && b<=c)
    {
        if(flag)
        {
        a+=b;
        flag=false;
        }
        else
        {
        b+=a;
        flag=true;
        }
        count++;
    }
    cout<<count<<endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   int t;
   cin>>t;
   while(t--)
   comp();
    return 0;
}