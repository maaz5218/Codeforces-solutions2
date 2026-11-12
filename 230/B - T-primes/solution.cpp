#include<bits/stdc++.h>
using namespace std;
bool isprime(long long n) {
    if (n < 2) return false;
    if (n % 2 == 0) return n == 2;
    for (long long i = 3; i * i <= n; i += 2)
        if (n % i == 0) return false;
    return true;
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
  long long int a,b,c;
  cin>>a;
  while(a--)
  {
      cin>>b;
      c=sqrt(b);
      if((c*c)==b)
      {
          if(isprime(c))
          cout<<"YES"<<endl;
          else
          cout<<"NO"<<endl;
      }
       else
          cout<<"NO"<<endl;
  }
    return 0;
    
}