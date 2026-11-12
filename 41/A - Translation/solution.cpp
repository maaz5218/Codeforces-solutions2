#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s,t;
    cin >> s>>t;
    int l = s.size();
	int l2 = t.size();
    if(l!= l2) {
        cout << "NO" << endl;
        return 0;
	}
    for (int i = 0; i < l; i++)
    {
        if(s[i]!= t[l-1-i]) {
            cout << "NO" << endl;
            return 0;
		}
    }
	cout << "YES" << endl;
    return 0;
}