#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string n;
    cin>>n;
    int count=0;
    for(int i=0;i<n.length();i++)
    {
        if(n[i]=='4' || n[i]=='7')
        count++;
    }
    if(count==0)
    {
        cout<<"NO";
        return 0;
    }
    while(count>0)
    {
        int temp=count%10;
        if(temp!=4 && temp!=7)
        {
            cout<<"NO";
            return 0;
        }
        count/=10;
    }
    
    cout<<"YES";
    return 0;
}