#include<bits/stdc++.h>
using namespace std;
void comp()
{
    int a,b;
    cin>>a;
    int i=0;
    b=a;
    while(a>0)
    {
        a/=10;
        i++;
    }
    b=b%10;
    int count=(b-1)*10;
    for(int j=1;j<=i;j++)
    count+=j;
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