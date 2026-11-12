#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
  long int a;
  cin>>a;
  int count=0;
  int i;
  while(a>0)
  {
      i=((count+1)*(count+2))/2;
      a-=i;
      if(a>=0)
      count++;
  }
  cout<<count;
    return 0;
}