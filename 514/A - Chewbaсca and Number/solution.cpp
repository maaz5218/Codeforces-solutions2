#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string n;
    cin>>n;
    for(int i=0;i<n.length();i++)
    {
        if(i==0 && n[i]=='9')
        continue;
        if(n[i]>'4')
        {
            int temp=n[i]-'0';
            temp=9-temp;
            n[i]=temp+'0';
        }
    }
    cout<<n;
    return 0;
}