#include<iostream>
#include<algorithm>
using namespace std;
void comp(long long int q1[],long long int q2[])
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a==1)
    {
        cout<<q1[c]-q1[b-1]<<endl;
    }
    else
    {
        cout<<q2[c]-q2[b-1]<<endl;
    }
}
int main()
{
  int a;
   cin>>a;
  long long int *arr=new long long int [a];
   long long int *pre1=new long long int[a+1];
   pre1[0]=0;
   for(int i=0;i<a;i++)
   {
       cin>>arr[i];
       pre1[i+1]=pre1[i]+arr[i];
   }
   long long int *pre2=new long long int[a+1];
   pre2[0]=0;
   sort(arr,arr+a);
   for(int i=0;i<a;i++)
   {
       pre2[i+1]=pre2[i]+arr[i];
   }
   int t;
   cin>>t;
   while(t--)
   comp(pre1,pre2);
   delete [] arr;
   delete [] pre1;
   delete [] pre2;
    return 0;
}