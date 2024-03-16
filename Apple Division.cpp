#include<bits/stdc++.h>
using namespace std;
#define int long long
 
void subset(vector<int> v,int n,int idx,int sum,int &mn,int tmp_sum=0)
{
    if(idx==n)
    {
        mn=min(mn,abs(sum-2*tmp_sum));
        return;
 
    }
 
    subset(v,n,idx+1,sum,mn,tmp_sum+v[idx]);
    subset(v,n,idx+1,sum,mn,tmp_sum);
}
 
void solve()
{
  int n;
  cin>>n;
 
  vector<int> v(n);
  int sum=0;
  for(int i=0;i<n;i++)
   {
        cin>>v[i];
        sum+=v[i];
   }
 
  int mn=INT_MAX;
 
  subset(v,n,0,sum,mn);
  cout<<mn<<endl;
}
 
 
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    solve();
 
    return 0;
}
