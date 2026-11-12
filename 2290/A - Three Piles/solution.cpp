// CodeSmash Arena — a Codeforces extension by codesmash.in
// Write your standard template in the Templates tab in the left panel.
// Your code goes here.
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    int mi=min(a,min(b,c));
    int ma=max(a,max(b,c));
    if(a==b && b==c)
        cout<<"NO"<<endl;
   else if((a+b+c)%3==0 && ma-mi==2) 
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}