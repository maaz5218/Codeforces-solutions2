#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        long int n;
        cin >> n;
        vector<int>v(n);
        int max = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] > max)
                max = v[i];
        }
        cout << max * n<<endl;
    }
    return 0;
 
}
 