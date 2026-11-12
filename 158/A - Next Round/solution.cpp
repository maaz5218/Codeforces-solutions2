#include<iostream>
using namespace std;
int count=0;
void t()
{
    int a,b;
    cin>>a>>b;
    b--;
    int *c=new int[a];
    for(int i=0;i<a;i++)
    {
        cin>>c[i];
    }
    for(int i=0;i<a;i++)
    {
        if(c[i]>=c[b] && c[i]>0)
        count++;
    }
    delete[] c;
}
 
int main()
{
    t();
    cout<<count;
    return 0;
}