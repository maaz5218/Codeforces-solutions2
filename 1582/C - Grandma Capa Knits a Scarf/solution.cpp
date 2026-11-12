#include<bits/stdc++.h>
using namespace std;
void foo()
{
    int n;
    cin>>n;
    string temp;
    cin>>temp;
    int l=0,r=n-1;
    char x;
    bool flag1=false;
    int count1=0,count2=0;
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
                    count1=n;
                break;
                }
                count1++;
            }
            else
            {
               x= temp[l];
               flag1=true;
            }
        }
    }
 
     l=0,r=n-1;
     flag1=false;
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
                    count2=n;
                break;
                }
                count2++;
            }
            else
            {
               x= temp[r];
               flag1=true;
            }
        }
    }
    if(!(count1==n && count2==n))
    cout<<min(count1,count2)<<endl;
    else
    cout<<"-1"<<endl;
    }
    
int main()
{
  int t;
  cin>>t;
  while(t--)
  foo();
  return 0;
}