#include<bits/stdc++.h>
using namespace std;
void comp()
{
    string s;
    cin>>s;
    std::vector<int>vec;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!='0')
        {
            int temp=s[i]-'0';
            temp=temp*pow(10,s.length()-i-1);
            vec.push_back(temp);
        }
    }
    cout<<vec.size()<<endl;
    for(int i=vec.size()-1;i>=0;i--)
    cout<<vec[i]<<" ";
    cout<<endl;
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