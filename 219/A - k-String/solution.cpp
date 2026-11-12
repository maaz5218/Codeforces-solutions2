#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    for (int i = 0; i < s.length(); i += t)
    {
        for (int j =1 ; j < t; j++)
        {
            if (s[i] != s[j+i])
            {
                cout << "-1";
                return 0;
            }
        }
    }
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < s.length(); j += t)
            cout << s[j];
    }
    return 0;
}