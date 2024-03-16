#include<bits/stdc++.h>
using namespace std;
#define int long long
 
int m=1e9+7;
 
 
 
void solve()
{
 
  int n;
  cin>>n;
 
  if(n==2 || n==3)
  {
      cout<< "NO SOLUTION"<<endl;
      return ;
  }
 
 
  for(int i=2;i<=n;i+=2)
  {
      cout<<i<< " ";
  }
 
  for(int i=1;i<=n;i+=2)
  {
      cout<<i<< " ";
  }
 
  cout<<endl;
}
 
 
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    solve();
 
    return 0;
}
 
