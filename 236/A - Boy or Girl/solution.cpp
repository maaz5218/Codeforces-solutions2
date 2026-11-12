#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   string s;
   cin>>s;
   int count=1;
   set<int> v;
   v.insert(s[0]);
   for(int i=1;i<s.length();i++)
   {
       if(!v.count(s[i]))
       {
           v.insert(s[i]);
           count++;
       }
   }
(count%2==0)?cout<<"CHAT WITH HER!":cout<<"IGNORE HIM!";
    return 0;
}