#include<bits/stdc++.h>
using namespace std;
void comp()
{
    int a,b;
    cin>>a>>b;
    string temp;
    int count=0;
    for(int i=1;i<=a;i++)
    {
            cin>>temp;
            if(i==a)
            {
                for(int j=0;j<b-1;j++)
                {
                    if(temp[j]=='D')
                    count++;
                }
            }
            if(temp[b-1]=='R')
            count++;
        
    }
    cout<<count<<endl;
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    comp();
    
    return 0;
}