#include<bits/stdc++.h>
using namespace std;
void comp()
{
     string s;
    cin>>s;
    bool flag=false;
    int temp=0,count=0;
    int j=0;
    while(s[j]=='0' && j<s.length())
    j++;
    while(s[j]=='1' && j<s.length())
    j++;
    for(int i=j;i<s.length();i++)
    {
        if(s[i]=='1')
        {
            count+=temp;
            temp=0;
        }
        else
        {
        temp++;
        }
        
    }
    cout<<count<<endl;
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