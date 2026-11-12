// CodeSmash Arena — a Codeforces extension by codesmash.in
// Write your standard template in the Templates tab in the left panel.
// Your code goes here.
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count1=0;
    char ch='R';
    for(int i=0;i<n;i++)
        {
            if(s[i]!=ch)
            {
count1++;           
            }
            if(s[i]=='R')
                    ch='B';
                else
                    ch='R';
        }
    // temp[n-1]=s[n-1];
    // for(int i=n-2;i>=0;i--)
    //     {
    //         temp[i]=s[i];
    //         if(temp[i]==temp[i+1])
    //         {
    //             count2++;
    //             if(temp[i]=='R')
    //                 temp[i]='B';
    //             else
    //                 temp[i]='R';
    //         }
    //     }
    // cout<<min(count1,count2)<<endl;
    cout<<count1<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}