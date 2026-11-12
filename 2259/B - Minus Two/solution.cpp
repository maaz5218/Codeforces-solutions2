#include<bits/stdc++.h>
using namespace std;
void foo()
{
    int a,b=0,c=0,d=0;
    cin>>a;
    long long e;
    for(int i=0;i<a;i++)
    {
        cin>>e;
        if(e%2==0)
        {
        b++;
        if((e/2)%2==0)
        d++;
        }
        else
        c++;
    }
    cout << max(c, max(d, b-d)) << '
';
}
int main()
{
    long int t;
    cin>>t;
    while(t--)
    foo();
    return 0;
}