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
 
    int cnt=0;
 
    for(int i=5;i<=n;i+=5)
    {
        int j=i;
 
        while(j%5==0)
        {
            j/=5;
            cnt++;
        }
    }
 
    cout<<cnt<<endl;
    return 0;
}
