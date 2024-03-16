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
 
    while(t--)
    {
        int a,b;
        cin>>a>>b;
 
        if(a<b)
        swap(a,b);
 
        int m_a=a%3;
        int m_b=b%3;
        int min_move_a=a/2+a%2;
        int min_move_b=b;
        if(((m_a==0 && m_b==0)||((m_a+m_b)%3==0)) && min_move_a<=min_move_b)
        {
            cout<< "YES"<<endl;
        }
        else
        {
            cout<< "NO"<<endl;
        }
 
    }
    return 0;
}
