#include<bits/stdc++.h>
using namespace std;
void foo()
{
    int a,b;
    cin>>a>>b;
    string s;
    cin>>s;
    int min=INT_MAX;
    int count=0;
    int i=0;
    for(i;i<b;i++)
    {
        if(s[i]=='W')
        count++;
    }
    if(count<min)
    min=count;
    int temp=min;
    int l=1;
    while(i<a)
    {
        count=temp;
        if(s[l-1]=='W')
        count--;
        if(s[i]=='W')
        count++;
        if(count<min)
        min=count;
        i++;
        l++;
        temp=count;
    }
    cout<<min<<endl;
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