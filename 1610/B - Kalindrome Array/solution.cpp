#include<bits/stdc++.h>
using namespace std;
void foo()
{
    int n;
    cin>>n;
    vector<int> temp(n);
    for(int i=0;i<n;i++)
    {
        cin>>temp[i];
    }
    int l=0,r=n-1;
    int x;
    bool flag1=false,result=true;
    
    while(l<r)
    {
        if(temp[l]==temp[r])
        {
            l++;
            r--;
        }
        else
        {
            if(flag1)
            {
                if(temp[l]==x)
                l++;
                else if(temp[r]==x)
                r--;
                else
                {
                    result=false;
                break;
                }
            }
            else
            {
               x= temp[l];
               flag1=true;
            }
        }
    }
    if(result)
    cout<<"YES"<<endl;
    else
    {
     l=0,r=n-1;
     flag1=false,result=true;
      while(l<r)
    {
        if(temp[l]==temp[r])
        {
            l++;
            r--;
        }
        else
        {
            if(flag1)
            {
                if(temp[l]==x)
                l++;
                else if(temp[r]==x)
                r--;
                else
                {
                    result=false;
                break;
                }
            }
            else
            {
               x= temp[r];
               flag1=true;
            }
        }
    }
    if(result)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    }
    
 
}
int main()
{
  int t;
  cin>>t;
  while(t--)
  foo();
  return 0;
}