#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long int a,b;
    cin>>a>>b;
    while(b--)
    {
        if(a%10==0)
        a/=10;
        else
        a--;
    }
    cout<<a;
    return 0;
}