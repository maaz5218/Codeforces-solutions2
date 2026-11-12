#include<iostream>
#include<string>
using namespace std;
void t()
{
    string c;
    cin>>c;
    int l=c.length();
    if(l<=10)
    {
    cout<<c<<endl;
    return;
    }
    else
    {
        cout<<c[0]<<l-2<<c[l-1]<<endl;
        return;
    }
}
 
int main()
{
    int n;
    cin>>n;
    while(n--)
    t();
    return 0;
}