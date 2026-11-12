#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int>vec(3);
    for(int i=0;i<3;i++)
    cin>>vec[i];
    int b;
    sort(vec.begin(),vec.end());
    b=abs(vec[1]-vec[0])+abs(vec[1]-vec[2]);
    cout<<b;
    
    return 0;
}