#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
vector<int>t(n);
    cin>>t[0];
    int i=-1,j=-1;
    bool c=false;
    for(int k=1;k<n;k++)
        {
            cin>>t[k];
            if(c)
            {
            if(t[k]>t[k-1] && j==-1)
            {
                j=k-1;
            }
            }
            else{
                if(t[k]<t[k-1])
                {
                    c=true;
                    i=k-1;
                }
            }
        }
    if(i==-1 && j==-1)
    {
        cout<<"yes"<<endl<<"1 1"<<endl;
    }
    else{
    if(i!=-1 && j==-1)
        j=n-1;
    if(i==-1 && j==-1)
    {
        cout<<"yes"<<endl;
        cout<<"1 "<<n<<endl;
        return 0;
    }
    else{
int temp=i,temp1=j;
        while(temp<temp1)
            {
                swap(t[temp],t[temp1]);
                temp++;
                temp1--;
            }
        for(int k=1;k<n;k++)
            {
                if(t[k]<t[k-1])
                {
                    cout<<"no"<<endl;
                    return 0;
                }
            }
        cout<<"yes"<<endl<<i+1<<" "<<j+1<<endl;
    }
    }
    return 0;
}