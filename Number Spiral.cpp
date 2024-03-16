#include<bits/stdc++.h>
using namespace std;
#define int long long
 
void solve()
{
    int r,c;
    cin>>r>>c;
 
    int ans=0;
    if(r>c)
    {
 
        if(r&1)
        {
 
            ans+=(r-1)*(r-1)+c;
        }
        else{
            ans+=(r*r)-c+1;
        }
    }
    else{
        if(c&1)
        {
            ans+=c*c-r+1;
        }
        else
        {
            ans+=(c-1)*(c-1)+r;
        }
    }
 
    cout<<ans<<endl;
}
 
int32_t main()
{
    int t;
    cin>>t;
 
    while(t--)
    {
        solve();
    }
}
