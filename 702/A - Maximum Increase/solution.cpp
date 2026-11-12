#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   long long int t;
   cin>>t;
   vector<long long int>v(t);
   for(int i=0;i<t;i++)
   {
    cin>>v[i];
   }
   int max=0;
   int count=1;
   for(int i=0;i<t;i++)
   {
       while(v[i]<v[i+1] && i<t-1)
       {
           count++;
           i++;
       }
       if(count>max)
       max=count;
       count=1;
   }
   cout<<max;
    return 0;
}