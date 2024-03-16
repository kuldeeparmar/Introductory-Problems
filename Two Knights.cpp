#include<bits/stdc++.h>
using namespace std;
#define int long long
int m=1e9+7;
#define pp pair<int,int>
 
 
 
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
 
 
    for(int i=1;i<=t;i++)
    {
        int total=((i*i)*(i*i-1))/2;
        int clash=4*(i-1)*(i-2);
 
        cout<<total-clash<<endl;
    }
    return 0;
}
