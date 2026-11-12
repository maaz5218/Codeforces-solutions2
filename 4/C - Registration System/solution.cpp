#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >> n;
 
    unordered_map<string, int> cnt;
 
    while (n--) {
        string s;
        cin >> s;
 
        if (cnt[s] == 0) {
            cout << "OK"<<endl;
            cnt[s] = 1;
        } else {
            cout << s << cnt[s] <<endl;
            cnt[s]++;  
        }
    }
 
    return 0;
}