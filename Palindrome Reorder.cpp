#include<bits/stdc++.h>
using namespace std;
#define int long long
 
int m=1e9+7;
 
void solve()
{
  string s;
  cin>>s;
 
  int n=s.length();
  vector<int> freq(26,0);
 
  for(int i=0;i<n;i++)
  {
      int asci=s[i]-'A';
      freq[asci]++;
  }
 
  bool flag=false;
  for(int i=0;i<26;i++)
  {
      if(n%2==0)
      {
          if(freq[i]%2)
          {
              cout<< "NO SOLUTION";
              return;
          }
      }
      else
      {
          if(freq[i]%2  && flag)
          {
              cout<< "NO SOLUTION";
              return ;
          }
 
          if(freq[i]%2)
            flag=true;
      }
  }
 
 
  char mid;
  string s1,s2;
  for(int i=0;i<26;i++)
  {
      if(freq[i])
      {
          if(freq[i]%2==0)
          {
              s1.append(freq[i]/2,char(65+i));
              s2.append(freq[i]/2,char(65+i));
              freq[i]=0;
          }
          else
          {
              mid=char(65+i);
              freq[i]--;
              s1.append(freq[i]/2,char(65+i));
              s2.append(freq[i]/2,char(65+i));
              freq[i]=0;
 
          }
      }
  }
 
  reverse(s2.begin(),s2.end());
    if(n%2)
   s1+=mid+(s2);
    else
    s1+=(s2);
   cout<<s1<<endl;
 
 
}
 
 
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    solve();
 
    return 0;
}
