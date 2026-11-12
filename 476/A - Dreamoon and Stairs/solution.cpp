#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b;
    cin>>a>>b;
    if(b>a)
    {
        cout<<"-1";
        return 0;
    }
    int c=a/2;
    int d=a-(2*c);
    c+=d;
    d=c%b;
    d=b-d;
    
    (c%b==0)?cout<<c:cout<<c+d;
    return 0;
}