#include<bits/stdc++.h>
using namespace std;
 
void comp(int &temp,int &max)
{
    int a,b;
    cin>>a>>b;
    temp-=a;
    temp+=b;
    if(temp>max)
    max=temp;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a;
    cin>>a;
    int b=0,c=0;
    while(a--)
    comp(b,c);
    cout<<c;
    return 0;
}