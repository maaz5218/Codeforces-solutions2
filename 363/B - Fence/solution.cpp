#include<iostream>
using namespace std;
 
int main()
{
  int a,b;
   cin>>a>>b;
  long long int *arr=new long long int [a];
   long long int *pre1=new long long int[a+1];
   pre1[0]=0;
   for(int i=0;i<a;i++)
   {
       cin>>arr[i];
       pre1[i+1]=pre1[i]+arr[i];
   }
long long min=1;
long long min_sum=pre1[b];
for(int i=1;i<=a-b;i++)
{
   long long int n=pre1[i+b]-pre1[i];
    if(n<min_sum)
    {
        min_sum=n;
        min=i+1;
    }
}
cout<<min;
   delete [] arr;
   delete [] pre1;
    return 0;
}