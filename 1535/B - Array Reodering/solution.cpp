#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
void comp()
{
    int a;
    cin >> a;
    vector<int>vec(a, 0);
    int count=0;
    for (int i = 0; i < a; i++)
    {
		cin >> vec[i];
    }
    int j = 0;
for (int i = 0; i < a; i++) {
    if (vec[i] % 2 == 0) {
        swap(vec[i], vec[j]);
        j++;
    }
}
 
    for (int i = 0; i < a; i++)
    {
        for (int k = i + 1; k < a; k++)
        {
            if (gcd(vec[i],2* vec[k]) > 1)
                count++;
		}
    }
    cout << count << endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
        comp();
    return 0;
}