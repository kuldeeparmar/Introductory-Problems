#include<bits/stdc++.h>
using namespace std;
#define int long long
bool is_safe(int n,int r,int c,vector<vector<char>> visit)
{
    for(int i=c-1; i>=0; i--)
    {
        if(visit[r][i]=='1')
            return false;
    }
 
    for(int i=r-1,j=c-1; i>=0 && j>=0; i--,j--)
    {
        if(visit[i][j]=='1')
            return false;
    }
 
    for(int i=r+1,j=c-1; i<n && j>=0; i++,j--)
    {
        if(visit[i][j]=='1')
            return false;
    }
 
    return true;
}
void n_queen(int n,int c,vector<vector<char>> &chess,int &cnt)
{
    if(c==n)
    {
        cnt+=1;
        return ;
    }
 
    for(int r=0; r<n; r++)
    {
        if(chess[r][c]=='*')
            continue;
 
        chess[r][c]='1';
 
        if(is_safe(n,r,c,chess))
        {
            n_queen(n,c+1,chess,cnt);
        }
 
        chess[r][c]='.';
    }
 
}
void solve()
{
    int cnt=0;
    vector<vector<char>> chess(8,vector<char> (8));
    int n=8;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>chess[i][j];
        }
    }
 
    n_queen(n,0,chess,cnt);
 
    cout<<cnt<<endl;
}
 
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
 
    solve();
 
    return 0;
}
