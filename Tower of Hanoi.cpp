#include<bits/stdc++.h>
using namespace std;
#define int long long
 
void t_o_h(int n,char from,char to,char by,vector<pair<int,int>> &ans)
{
    if(n==0)
        return;
 
    t_o_h(n-1,from,by,to,ans);
    int a=from-48;
    int b=to-48;
    ans.push_back({a,b});
    t_o_h(n-1,by,to,from,ans);
}
 
void solve()
{
    int n;
    cin>>n;
 
    vector<pair<int,int>> ans;
 
    t_o_h(n,'1','3','2',ans);
 
    cout<<ans.size()<<endl;
    for(auto i:ans)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
}
 
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
 
    solve();
 
    return 0;
}
