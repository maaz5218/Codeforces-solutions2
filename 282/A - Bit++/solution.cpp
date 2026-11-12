#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int a=0;
    while(n--)
    {
        string s;
        cin>>s;
        if(s[0]=='+' || s[s.length()-1]=='+')
        a++;
        else
        a--;
    }
    cout<<a;
}