#include<bits/stdc++.h>
using namespace std;
#define int long long
int m=1e9+7;
#define pp pair<int,int>
 
 
 
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin>>n;
 
    int ans=2;
    for(int i=2;i<=n;i++)
    {
        ans=(ans*2)%m;
    }
 
    cout<<ans<<endl;
    return 0;
}
