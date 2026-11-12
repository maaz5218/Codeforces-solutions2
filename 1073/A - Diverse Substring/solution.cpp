#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a;
    cin>>a;
    string s;
    cin>>s;
    for(int i=0;i<a-1;i++)
    {
    if(s[i]!=s[i+1])
    {
        cout<<"YES"<<endl;
        cout<<s[i]<<s[i+1];
        return 0;
    }
    }
    cout<<"NO";
    return 0;
}