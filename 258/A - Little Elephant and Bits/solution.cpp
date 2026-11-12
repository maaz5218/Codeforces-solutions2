#include<iostream>
#include<string>
using namespace std;
int main()
{
   string a;
   cin>>a;
   bool iszero=false;
   int b=0;
   while(b!=a.length())
   {
       if(a[b]=='0')
       {
           iszero=true;
       }
       b++;
   }
   if(!iszero)
   {
       for(int i=1;i<a.length();i++)
       cout<<a[i];
   }
   else
   {
       iszero=false;
       for(int i=0;i<a.length();i++)
       {
           if(a[i]=='0' && !iszero)
           {
               iszero=true;
               continue;
           }
           cout<<a[i];
       }
   }
    return 0;
}