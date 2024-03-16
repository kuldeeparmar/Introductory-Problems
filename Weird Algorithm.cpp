#include"bits/stdc++.h"
using namespace std;
 
typedef long long ll;

void solve()
{
  ll n;
  cin>>n;
 
  cout<<n<< " ";
  while(n!=1)
  {
      if(n%2)
      {
          n=n*3+1;
          cout<<n<< " ";
      }
 
      while(n%2==0)
      {
         n/=2;
         cout<<n<< " ";
      }
 
  }
 
 
}
int main()
{
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
 
 
    solve();
 
    return 0;
}
