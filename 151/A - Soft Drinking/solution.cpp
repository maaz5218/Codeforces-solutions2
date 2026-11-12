#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b,c,d,e,f,g,h;
    cin>>a>>b>>c>>d>>e>>f>>g>>h;
    b*=c;
    d*=e;
    g=b/g;
    h=f/h;
    g=min(g,h);
    g=min(d,g);
    cout<<g/a;
    return 0;
}