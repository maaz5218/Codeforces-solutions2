#include<bits/stdc++.h>
using namespace std;
void comp()
{
    string s;
    cin >> s;
    string h;
    cin >> h;
    string temp = "";
    if (s == h)
    {
        cout << "YES" << endl;
        return;
    }
    int a = s.length();
    int b = h.length();
    sort(s.begin(), s.end());
    if (b < a)
    {
        cout << "NO" << endl;
        return;
    }
    else
    {
        int c = b - a;
        if (c == 0)
        {
            sort(h.begin(), h.end());
            if (s == h)
            {
                cout << "YES" << endl;
                return;
            }
            else
            {
                cout << "NO" << endl;
                return;
            }
        }
        else
        {
            for (int i = 0; i <= c; i++)
            {
                temp = "";
                for (int j = i; j < a + i; j++)
                {
                    temp += h[j];
 
                }
                sort(temp.begin(), temp.end());
                if (temp == s)
                {
                    cout << "YES" << endl;
                    return;
                }
            }
        }
    }
    cout << "NO"<<endl;
}
 
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
        comp();
    return 0;
}