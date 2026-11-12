#include<iostream>
using namespace std;
int main()
{
   int a,b;
   cin>>a>>b;
   int *c=new int[b];
   for(int i=0;i<b;i++)
   {
       cin>>c[i];
   }
   for(int i=0;i<b;i++)
   {
       for(int j=0;j<b-i-1;j++)
       {
           if(c[j]>c[j+1])
           {
               int temp=c[j];
               c[j]=c[j+1];
               c[j+1]=temp;
           }
       }
   }
   int d=b-a;
   d++;
    int min=c[b-1]-c[0];
    for(int i=0;i<d;i++)
    {
        int e=b-d+i;
        if((c[e]-c[i])<min)
        {
            min=c[e]-c[i];
        }
    }
   
   cout<<min;
   delete [] c;
    return 0;
}