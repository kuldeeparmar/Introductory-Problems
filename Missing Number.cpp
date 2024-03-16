#include"bits/stdc++.h"
using namespace std;
 
typedef long long ll;

void solve()
{
  ll n;
  cin>>n;
 
  vector<ll> v(n+1,0);
 
  for(ll i=0;i<n-1;i++)
  {
      ll num;
      cin>>num;
 
      v[num]=1;
  }
 
  for(ll i=1;i<n+1;i++)
    if(v[i]==0)
    cout<<i;
 
 
}
int main()
{
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
 
 
    solve();
 
    return 0;
}
