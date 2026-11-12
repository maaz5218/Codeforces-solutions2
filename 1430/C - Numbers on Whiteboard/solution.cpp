#include<bits/stdc++.h>
using namespace std;
void comp()
{
    long long a;
    cin>>a;
    cout<<"2"<<endl;
 
    vector<int>v(a);
    for(int i=0;i<a;i++)
    {
        v[i]=i+1;
    }
    for(int i=0;i<a-1;i++)
    {
        int temp=v.size();
       if((i==a-2) || (v[temp-1]%2==1 && v[temp-2]%2==1) || (v[temp-1]%2==0 && v[temp-2]%2==0))
        {
            cout<<v[temp-2]<<" "<<v[temp-1];
            temp=v[temp-2]+v[temp-1];
            temp/=2;
            v.erase(v.begin()+v.size()-2);
            v.erase(v.begin()+v.size()-1);
            v.push_back(temp);
        }
        else
        {
            cout<<v[temp-3]<<" "<<v[temp-1];
            temp=v[temp-3]+v[temp-1];
            temp/=2;
            v.erase(v.begin()+v.size()-3);
            v.erase(v.begin()+v.size()-1);
            v.push_back(temp);
        }
        cout<<endl;
    }
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
  long int t;
   cin>>t;
   while(t--)
   comp();
    return 0;
}