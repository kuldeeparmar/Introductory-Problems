#include<bits/stdc++.h>
using namespace std;
#define int long long
int pow10(int x){
    int res = 1;
    for(int i = 0; i < x; i++)
        res *= 10;
    return res;
}
 
void solve()
{
    int n;
    cin>>n;
 
    for(int i=0;i<n;i++)
    {
        int q;
        cin>>q;
 
        int cnt=1;
        int num=9;
 
        while(q-num*cnt>0)
        {
            q-=num*cnt;
            cnt++;
            num*=10;
        }
 
        int p=q%cnt;
        int number=pow10(cnt-1)+(q-1)/cnt;
 
        if(p==0)
        {
          cout<<number%10<<endl;
        }
        else
        {
            number=number/pow10(cnt-p);
            cout<<number%10<<endl;
        }
    }
}
 
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
 
    solve();
 
    return 0;
}
