#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long a;
    cin>>a;
    int count7=a/7;
    int count4=0;
    int d=a%7;
    do
    {
        if(d%4==0)
        {
            count4=d/4;
            break;
        }
        else
        {
            d+=7;
            --count7;
        }
    }while(count7>=0);
    if(count4==0 && count7<=0)
    cout<<"-1";
    else
    {
        for(int i=0;i<count4;i++)
        cout<<"4";
        for(int i=0;i<count7;i++)
        cout<<"7";
    }
    return 0;
}