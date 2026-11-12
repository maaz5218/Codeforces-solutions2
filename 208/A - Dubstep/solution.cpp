#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    string n = "";
    int  j = 0;
    bool sp = false;
    while (j < s.size())
    {
         
        if (j < s.size() - 2)
        {
            if (s[j] == 'W' && s[j + 1] == 'U' && s[j + 2] == 'B')
            {
                if (n != "" && j != s.size() - 3 && !sp)
                {
                    n += " ";
					sp = true;
                }
                j+=3;
            }
            else
            {
                n += s[j];
				j++;
				sp = false;
            }
        }
        else
			n += s[j++];
    }
    cout << n;
    return 0;
}