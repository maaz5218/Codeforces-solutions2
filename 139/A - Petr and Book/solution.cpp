#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
  int t;
  cin>>t;
   vector<int>v(7);
   for(int i=0;i<7;i++)
   cin>>v[i];
   int i=0;
   while(t>0)
   {
       if(i==7)
       {
       i=0;
       }
       t-=v[i];
       i++;
       
   }
   cout<<i;
    return 0;
}