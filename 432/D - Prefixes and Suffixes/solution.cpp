#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
using ull = unsigned long long;
using ld = long double;
 
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
 
const ll MOD = 1e9 + 7;
const ll INF = LLONG_MAX;
 
void prefix_function(string s) {
    int n = s.size();
    vector<int> pi(n, 0);
    unordered_map<int,int>cnt;
    for (int i = 1; i < n; i++) {
        int j = pi[i - 1];
 
        while (j > 0 && s[i] != s[j]) {
            j = pi[j - 1];
        }
 
        if (s[i] == s[j]) {
            j++;
        }
 
        pi[i] = j;
        cnt[j]++;
    }
    vector<int>pre(n+1,0);
    for(auto& [r,c]:cnt)
        pre[r]=c;
priority_queue<int,vector<int>,greater<>>out;
    int k=pi[n-1];
    while(k!=0)
        {
            out.push(k);
            k=pi[k-1];
        }
 
for (int i = n; i > 0; i--)
    pre[pi[i - 1]] += pre[i];
    
    cout<<out.size()+1<<endl;
    while(!(out.empty()))
        {
            auto r=out.top();
         cout<<r<<" "<<pre[r]+1<<endl;
            out.pop();
        }
    cout<<s.size()<<" 1"<<endl;
    return;
}
 
void solve()
{
    string s;
    cin>>s;
    prefix_function(s);
    return;
}
int main() {
    fast;
    int t=1;
    while(t--)
        solve();
    return 0;
}