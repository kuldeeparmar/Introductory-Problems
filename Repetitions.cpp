#include"bits/stdc++.h"
using namespace std;
 
typedef long long ll;

void solve()
{
  string s;
  cin>>s;
 
  ll mx=0;
  ll count=1;
  for(int i=1;i<s.length();i++)
  {
     if(s[i]==s[i-1])
     {
        count++;
     }
     else{
        mx=max(count,mx);
        count=1;
     }
  }
 
  mx=max(mx,count);
 
  cout<<mx;
 
 
}
int main()
{
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
 
 
    solve();
 
    return 0;
}
