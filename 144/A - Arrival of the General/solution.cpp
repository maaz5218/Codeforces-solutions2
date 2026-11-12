#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,count=0;
    cin>>a;
    vector<int>vec(a);
    for(int i=0;i<a;i++)
    cin>>vec[i];
    vector<int>::iterator imax=max_element(vec.begin(),vec.end());
   vector<int>::iterator imin=min_element(vec.begin(),vec.end());
   int max=*imax;
   int min=*imin;
    int i=0,j=a-1;
    bool fl1=false,fl2=false;
    while(i<a && j>=0)
    {
        if(vec[i]==max && !fl1)
        {
        count+=i;
        fl1=true;
        }
        if(vec[j]==min && !fl2)
        {
        count+=(a-j-1);
        fl2=true;
        }
        if(fl1 && fl2)
        break;
         if(!fl1)
        i++;
        if(!fl2)
        j--;
        
    }
    if(j<i)
    count--;
    cout<<count;
    return 0;
}