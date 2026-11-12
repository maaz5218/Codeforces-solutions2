#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long int a,b;
    cin>>a>>b;
    int count=0;
    while(b>=a)
    {
        a*=3;
        b*=2;
        count++;
    }
    cout<<count;
    return 0;
}