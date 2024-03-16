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
 
 
    int sum=(t*(t+1))/2;
 
    if(sum%2)
    {
        cout<< "NO"<<endl;
    }
    else
    {
        cout<< "YES"<<endl;
 
        set<int> st;
        vector<int> visit(t+1,0);
        int st_sum=0;
        int mx=t;
 
        while(st_sum<sum/2)
        {
            int rem_sum=sum/2-st_sum;
 
            if(rem_sum>mx)
            {
                st.insert(mx);
                st_sum+=mx;
                visit[mx]=1;
                mx-=1;
            }
            else
            {
                st.insert(rem_sum);
                visit[rem_sum]=1;
                st_sum+=rem_sum;
            }
 
        }
 
        cout<<st.size()<<endl;
            for(int i:st)
                cout<<i<< " ";
 
            cout<<endl<<t-st.size()<<endl;
 
            for(int i=1;i<=t;i++)
            {
                if(!visit[i])
                    cout<<i<< " ";
            }
 
            cout<<endl;
 
 
    }
 
    return 0;
}
