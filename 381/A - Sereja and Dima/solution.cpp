#include<bits/stdc++.h>
using namespace std;
 
int main()
{
  int n;
  cin>>n;
  vector<int>temp(n);
  for(int i=0;i<n;i++)
  {
      cin>>temp[i];
  }
  int l=0,r=n-1;
  bool turn=true;
  int a=0,b=0;
  while(l<=r)
  {
      int temp1=max(temp[l],temp[r]);
      if(temp[l]<=temp[r])
      {
          r--;}
          else
          l++;
        if(turn)
        {
        a+=temp1;
        turn=false;
        }
        else
        {
           b+=temp1;
           turn=true;
        }
  }
  cout<<a<<" "<<b;
  return 0;
}