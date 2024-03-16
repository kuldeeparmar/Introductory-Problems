#include<bits/stdc++.h>
using namespace std;
#define int long long
 
int m=1e9+7;
 
 
 
void solve()
{
 
  int n;
  cin>>n;
 
  vector<int> v(n);
 
  for(int i=0;i<n;i++)
    cin>>v[i];
 
 
  int cnt=0;
 
  for(int i=1;i<n;i++)
  {
      if(v[i-1]>v[i])
      {
          cnt+=(v[i-1]-v[i]);
          v[i]=v[i-1];
      }
  }
 
 
  cout<<cnt<<endl;
 
}
 
 
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    solve();
 
    return 0;
}
 
