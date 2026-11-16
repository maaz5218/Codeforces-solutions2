#include<bits/stdc++.h>
using namespace std;
 
void prefix_function(string s) {
    int n = s.size();
    vector<int> pi(n, 0);
    for (int i = 1; i < n; i++) {
        int j = pi[i - 1];
 
        while (j > 0 && s[i] != s[j]) {
            j = pi[j - 1];
        }
 
        if (s[i] == s[j]) {
            j++;
        }
 
        pi[i] = j;
    }
    int si=pi[n-1];
    if(si==0)
    {
        cout<<"Just a legend";
cout<<endl;
        return;
    }
int cnt=count(pi.begin(),pi.end(),si);
if(cnt>=2)
{
    for(int i=0;i<si;i++)
    cout<<s[i];
}
else if(cnt<2 && pi[pi[n-1] - 1]!=0)
{
    for(int i=0;i<pi[pi[n-1]-1];i++)
    {
        cout<<s[i];
    }
}
else
cout<<"Just a legend";
cout<<endl;
    
}
 
void solve()
{
    string s;
    cin>>s;
    prefix_function(s);
}
 
int main() {
    int t=1;
    while(t--) {
        solve();
    }
    return 0;
}