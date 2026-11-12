#include<iostream>
using namespace std;
 
int main()
{
  int a;
  cin>>a;
  for(int i=0;i<a;i++)
  {
      for(int j=0;j<2*(a-i);j++)
      cout<<" ";
      for(int k=0;k<i;k++)
      {
          cout<<k<<" ";
      }
      for(int k=i;k>=0;k--)
      {
          if(k==0)
          cout<<k;
          else
          cout<<k<<" ";
      }
      cout<<endl;
  }
  for(int i=0;i<=a;i++)
  {
      cout<<i<<" ";
  }
  for(int i=a-1;i>=0;i--)
  {
      if(i==0)
      cout<<i;
      else
      cout<<i<<" ";
  }
  cout<<endl;
  for(int i=a-1;i>=0;i--)
  {
      for(int j=0;j<2*(a-i);j++)
      cout<<" ";
      for(int k=0;k<i;k++)
      {
 
          cout<<k<<" ";
      }
      for(int k=i;k>=0;k--)
      {
          if(k==0)
          cout<<k;
          else
          cout<<k<<" ";
      }
      cout<<endl;
  }
    return 0;
}