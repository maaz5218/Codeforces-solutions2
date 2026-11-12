#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
      if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y' || s[i]=='Y' )        continue;
        else
        {
            cout<<".";
            if(s[i]>'A' && s[i]<='Z')
            s[i]+=32;
            cout<<s[i];
        }
    }
    
    return 0;
}