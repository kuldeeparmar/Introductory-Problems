#include<bits/stdc++.h>
using namespace std;
#define int long long
 
void permute(string s,set<string> &st,int i)
{
    if(i>=s.length())
    {
        st.insert(s);
        return;
    }
 
 
    for(int j=i;j<s.length();j++)
    {
        swap(s[i],s[j]);
        permute(s,st,i+1);
        swap(s[i],s[j]);
    }
}
 
void solve()
{
  string s;
  cin>>s;
 
  set<string> st;
 
  permute(s,st,0);
 
  cout<<st.size()<<endl;
  for(string i:st)
    cout<<i<<endl;
}
 
 
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    solve();
 
    return 0;
}
