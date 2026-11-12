#include<bits/stdc++.h>
using namespace std;
void comp()
{
    long long a;
        cin>>a;
    if(a<4)
    {
        cout<<a<<endl;
        return;
    }
 
   else if(a%2==0)
    {
        cout<<"0"<<endl;
    }
    else
    {
    cout<<"1"<<endl;
    }
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long int t;
    cin>>t;
    while(t--)
    comp();
    return 0;
}