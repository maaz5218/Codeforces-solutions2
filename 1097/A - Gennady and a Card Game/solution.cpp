#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   string a;
   cin>>a;
   bool flag=false;
   for(int i=0;i<5;i++)
   {
       string temp;
       cin>>temp;
       if(temp[0]==a[0] || temp[1]==a[1])
       flag=true;
   }
   (flag)?cout<<"YES":cout<<"NO";
    return 0;
}