#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b;
    cin>>a>>b;
    bool flag=true;
    for(int i=0;i<a;i++)
    {
            if(i%2 ==0)
            { 
                for(int j=0;j<b;j++)
                cout<<"#";
            }
            else
            {
                if(flag)
                {
                for(int j=0;j<b-1;j++)
                cout<<".";
                cout<<"#";
                flag=false;
                }
                else
                {
                    cout<<"#";
                    for(int j=0;j<b-1;j++)
                      cout<<".";
                
                flag=true;
                }
            }
        if(i!=(a-1))
        cout<<endl;
    }
    return 0;
}