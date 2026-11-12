#include<iostream>
using namespace std;
int count=0;
void t()
{
    int a,b,c,s;
    cin>>a>>b>>c;
    s=a+b+c;
    if(s>1)
    count++;
}
 
int main()
{
    int n;
    cin>>n;
    while(n--)
    t();
    cout<<count;
    return 0;
}