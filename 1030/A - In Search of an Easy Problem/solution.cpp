#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a;
    cin>>a;
    bool flag=false;
    for(int i=0;i<a;i++)
    {
        int temp;
        cin>>temp;
        if(temp==1)
        flag=true;
    }
    if(flag)
    cout<<"HARD";
    else
    cout<<"EASY";
    return 0;
}