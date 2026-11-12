#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   long long int n;
    cin>>n;
    vector<long long int> vec(n,0);
  long long int a;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        vec[i]=a;
    }
    sort(vec.begin(),vec.end());
    long long int max=vec.back()-vec.front();
   
   long long int count1=1;
   long long int count2=1;
    for(int i=1;i<n-1;i++)
    {
        if(vec[i]==vec.back())
        count1++;
        else if(vec[i]==vec.front())
        {
        count2++;
        }
    }
     if(max==0)
    cout<<"0 "<<(n*(n-1))/2;
    else
    cout<<max<<" "<<count1*count2;
    vec.clear();
    return 0;
    
}