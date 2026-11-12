#include<bits/stdc++.h>
using namespace std;
void comp()
{
    int a;
    cin>>a;
    string s;
    cin>>s;
    int i=0,j=s.length()-1;
    while(i<j)
    {
        if((s[i]==s[j]) || (s[i]+2)==s[j] || (s[j]+2)==s[i])
        {
            i++;
            j--;
        }
        else
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
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