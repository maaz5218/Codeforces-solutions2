#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    bool flag=false;
    for(int i=1;i<s.length();i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            flag=true;
            break;
        }
    }
    
    if(flag)
    cout<<s;
    else
    {
        if(s[0]>='a' && s[0]<='z')
        {
            s[0]-=32;
        }
        else
        {
            s[0]+=32;
        }
        cout<<s[0];
        for(int i=1;i<s.length();i++)
        {
            if(s[i]>='A' && s[i]<='Z')
            {
                s[i]+=32;
            }
            cout<<s[i];
        }
    }
    return 0;
}