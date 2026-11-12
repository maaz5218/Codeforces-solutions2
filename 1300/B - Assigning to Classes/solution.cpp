#include<bits/stdc++.h>
using namespace std;
void comp()
{
    long long a;
    cin>>a;
    vector<long long int>v(2*a);
    for(int i=0;i<2*a;i++)
    cin>>v[i];
    sort(v.begin(),v.end());
    cout<<abs(v[a-1]-v[a])<<endl;
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