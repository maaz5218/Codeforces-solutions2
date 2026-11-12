// CodeSmash Arena — a Codeforces extension by codesmash.in
// Write your standard template in the Templates tab in the left panel.
// Your code goes here.
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int>h(n);
    vector<int>out(n);
    for(int i=0;i<n;i++)
        {
            cin>>h[i];
        }
    sort(h.begin(), h.end());
 
int count = 0;
int k = n - 1, l = 0;
 
for(int i = 0; i < n;)
{
    int j = i;
 
    while(j < n && h[j] == h[i])
        j++;
 
    int freq = j - i;
 
    if(freq == 1)
    {
        out[l++] = h[i];
        count++;
    }
    else
    {
        out[l++] = h[i];
 
        for(int x = 1; x < freq; x++)
            out[k--] = h[i];
 
        count += 2;
    }
 
    i = j;
}
    cout<<count<<endl;
    for(int i=0;i<n;i++)
        cout<<out[i]<<" ";
    cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}