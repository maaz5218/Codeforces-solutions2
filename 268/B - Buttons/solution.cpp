#include<bits/stdc++.h>
using namespace std;
int comp(int n)
{
    if(n==1)
    return 1;
    else
    return comp(n-1)+((n*(n-1))/2)+1;
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    cout<<comp(t);
    return 0;
}