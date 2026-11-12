#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
   int a,min;
   cin>>a;
   int *c=new int[a];
   long int sum=0;
   for(int i=0;i<a;i++)
   {
       cin>>c[i];
       sum+=c[i];
   }
   sort(c,c+a,greater<int>());
 
   int mid=sum/2;
   int sum2=0;
   for(int i=0;i<a;i++)
   {
       sum2+=c[i];
       if(sum2>mid)
       {
           min=i+1;
           break;
       }
       
   }
 
   cout<<min;
   delete [] c;
    return 0;
}