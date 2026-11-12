#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    cin>>n;
    vector<int>temp(n);
    for(int i=0;i<n;i++)
    cin>>temp[i];
    sort(temp.begin(),temp.end());
    int q;
    cin>>q;
    while(q--)
    {
        int x;
        cin>>x;
        auto it=std::upper_bound(temp.begin(), temp.end(), x);
        cout<<it-temp.begin()<<endl;
    }
    return 0;
}