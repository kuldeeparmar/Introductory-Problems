#include<bits/stdc++.h>
using namespace std;
#define int long long
int del_row[]={-1,0,+1,0};
int del_col[]={0,+1,0,-1};
void dfs(int n,int i,int j,int &ans,vector<char> &v,int idx,vector<vector<int>> &visit)
{
 
    if((visit[i][j-1] && visit[i][j+1])&& (!visit[i-1][j] && !visit[i+1][j]))
        return ;
 
    if((visit[i-1][j] && visit[i+1][j]) && (!visit[i][j-1] && !visit[i][j+1]))
        return ;
 
 
 
 
    if(i==7 && j==1 && idx==48)
    {
        ans+=1;
        return ;
    }
 
    if(i==7 && j==1)
    {
        return;
    }
 
    visit[i][j]=1;
    if(v[idx]=='?')
    {
        for(int k=0;k<4;k++)
        {
            int x=i+del_row[k];
            int y=j+del_col[k];
 
            if(visit[x][y]==0)
                dfs(n,x,y,ans,v,idx+1,visit);
        }
    }
    else if(v[idx]=='R' && visit[i][j+1]==0)
    {
        dfs(n,i,j+1,ans,v,idx+1,visit);
    }
    else if(v[idx]=='L' && visit[i][j-1]==0)
    {
        dfs(n,i,j-1,ans,v,idx+1,visit);
    }
    else if(v[idx]=='U' && visit[i-1][j]==0)
    {
        dfs(n,i-1,j,ans,v,idx+1,visit);
    }
    else if(v[idx]=='D'&& visit[i+1][j]==0)
    {
       dfs(n,i+1,j,ans,v,idx+1,visit);
    }
 
 
    visit[i][j]=0;
 
}
void solve()
{
    vector<char> v(48);
 
    for(int i=0;i<48;i++)
    {
        cin>>v[i];
    }
 
    int ans=0;
    vector<vector<int>> visit(9,vector<int> (9,0));
    for(int i=0;i<9;i++)
    {
        visit[0][i]=1;
        visit[8][i]=1;
        visit[i][0]=1;
        visit[i][8]=1;
    }
    dfs(7,1,1,ans,v,0,visit);
 
    cout<<ans;
}
 
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
 
    solve();
 
    return 0;
}
