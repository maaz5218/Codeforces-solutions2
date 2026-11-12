#include<bits/stdc++.h>
using namespace std;
void foo()
{
    int n;
    cin>>n;
    vector<double>temp(n);
    double sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>temp[i];
        sum+=temp[i];
    }
    double avg=sum/n;
    avg*=2;
        long long total=0;
    map<double,int>key;
    for(int i=0;i<n;i++)
    {
        key[temp[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        if(key[avg-temp[i]]>0)
        {
            total+=key[avg-temp[i]];
            key[temp[i]]--;
            if((avg-temp[i])==temp[i])
            total--;
        }
    }
cout<<total<<endl;
return;
 
}
int main()
{
  int t;
  cin>>t;
  while(t--)
  foo();
  return 0;
}