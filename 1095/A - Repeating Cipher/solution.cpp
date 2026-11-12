#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   long int t;
   cin>>t;
   string s;
   cin>>s;
   int j=1;
   for(int i=0;i<t;i+=j)
   {
   cout<<s[i];
   j++;
   }
    return 0;
}