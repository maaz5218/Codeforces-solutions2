#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    cin>>n;
    double l;
    cin>>l;
    vector<double> temp(n) ;
 
double ans=INT_MIN;
for(int i=0;i<n;i++)
{
    cin>>temp[i];
}
sort(temp.begin(),temp.end());
for(int i=1;i<n;i++)
{
    double t=(temp[i]-temp[i-1])/2.0;
    if(t>ans)
    {
    ans=t;
    }
 
}
if(temp[n-1]<l)
{
    double t=l-temp[n-1];
    if(t>ans)
    ans=t;
}
if(temp[0]>0)
{
    double t=temp[0];
    if(t>ans)
    ans=t;
}
cout<<fixed<<setprecision(10)<<ans<<endl;
 
    return 0;
}