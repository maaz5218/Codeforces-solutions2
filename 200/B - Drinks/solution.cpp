#include<iostream>
using namespace std;
void t()
{
    int a;
    cin>>a;
    int *c=new int[a];
    int sum=0;
    for(int i=0;i<a;i++)
    {
        cin>>c[i];
        sum+=c[i];
    }
    cout<<(double)sum/a;
    delete[] c;
}
 
int main()
{
    t();
    return 0;
}