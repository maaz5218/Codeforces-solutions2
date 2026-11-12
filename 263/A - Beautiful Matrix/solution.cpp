#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a=0,b=0,c,d,e;
    while(b!=5)
    {
        cin>>c;
        if(c==1)
        {
            d=a;
            e=b;
        }
        a++;
        if(a==5)
        {
            b++;
            a=0;
        }
        
    }
    cout<<abs(2-e)+abs(2-d);
    return 0;
}