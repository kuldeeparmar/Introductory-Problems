#include<bits/stdc++.h>
using namespace std;
#define int long long
 
int m=1e9+7;
 
string gray_code(int x,int n)
{
    string str="";
    int prev=1&(x>>n-1);
    str+=char(prev+48);
    for(int i=n-2;i>=0;i--)
    {
        int curr=(1&x>>i);
 
        str+=char(prev^curr+48);
        prev=curr;
    }
 
    return str;
}
 
void solve()
{
  int n;
  cin>>n;
 
  int nums=pow(2,n);
 
  for(int i=0;i<nums;i++)
  {
      cout<<gray_code(i,n)<<endl;
  }
}
 
 
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    solve();
 
    return 0;
}
