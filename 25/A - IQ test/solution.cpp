#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    int t;
    cin>>t;
  vector<int>temp(t);
  int count1=0,count2=0;
  int odd;
  int even;
  for(int i=0;i<t;i++)
  {
      cin>>temp[i];
      if(temp[i]%2==0)
      {
      even=i+1;
      count1++;
      }
      else
      {
          odd=i+1;
          count2++;
      }
      
  }
  if(count1<count2)
  {
      cout<<even<<endl;
  }
  else
  {
      cout<<odd<<endl;
  }
    return 0;
}