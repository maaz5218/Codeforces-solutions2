#include<bits/stdc++.h>
using namespace std;
void foo()
{
    int a;
    cin>>a;
    int l,r;
    bool flag=false,temp=true;
    for(int i=0;i<a;i++)
    {
        cin>>r;
        if(temp)
        {
        if(i==0)
        {
           l=r; 
           continue;
        }
    if(flag)
        {
            if(r<l)
            temp=false;
        }
        else
        {
            if(l<r)
            flag=true;
        }
        l=r;
        }
    }
    if(temp)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
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