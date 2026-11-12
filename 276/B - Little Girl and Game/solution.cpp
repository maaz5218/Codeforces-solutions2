#include<iostream>
using namespace std;
 
int main()
{
  string s;
  cin>>s;
  int arr[26]={0};
  for(int i=0;i<s.length();i++)
  {
      int a=(int)s[i];
      a=a-97;
      arr[a]+=1;
  }
  int odd=0;
  for(int i=0;i<26;i++)
  {
      if(arr[i]%2==1)
      odd++;
  }
  if(odd==0 || odd%2==1)
  cout<<"First";
  else
  cout<<"Second";
    return 0;
}