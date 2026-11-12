#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   string s;
   cin>>s;
  vector<int>v;
  for(int i=0;i<s.length();i++)
  {
      if(s[i]!='+')
      {
          int temp=s[i]-'0';
          v.push_back(temp);
      }
  }
  sort(v.begin(),v.end());
  for(int i=0;i<v.size();i++)
  {
      cout<<v[i];
      if(i!=(v.size()-1))
      cout<<"+";
  }
    return 0;
}