#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h1,m1,h2,m2,m3;
    char ch;
    cin>>h1>>ch>>m1;
    cin>>h2>>ch>>m2;
    int h3=(h1+h2)/2;
    if((2*h3)==h1+h2)
    {
         m3=(m1+m2)/2;
    }
    else
    {
         m3=(m1+m2+60)/2;
    }
    if(m3>=60)
    {
        m3-=60;
        h3++;
    }
    (h3<10)?cout<<"0"<<h3<<":":cout<<h3<<":";
    (m3<10)?cout<<"0"<<m3<<endl:cout<<m3<<endl;
    return 0;
    
}