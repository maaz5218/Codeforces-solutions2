#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a;
    int *c=new int[a+1];
    for(int i=1;i<=a;i++)
    {
        cin>>c[i];
    }
    int *e=new int[a+1];
    for(int i=1;i<=a;i++)
    {
        
        e[c[i]]=i;
    }
     cin>>b;
    int *d=new int[b];
    long long int x=0,y=0;
    for(int i=0;i<b;i++)
    {
        cin>>d[i];
        x+=e[d[i]];
        y+=(a+1-e[d[i]]);
    }
    cout<<x<<" "<<y;
    delete []c;
    delete []d;
    delete []e;
    return 0;
}