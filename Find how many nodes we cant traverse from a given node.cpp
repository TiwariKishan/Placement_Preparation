/*
  Author - KISHAN TIWARI
  Dream bigger. Do bigger.
  Wake up with determination. Go to bed with satisfaction.
*/
//Sometimes later becomes never. Do it now.
#include<bits/stdc++.h>
using namespace std;
#define ll           long long
#define f(i,a,b)     for(ll i=a;i<b;i++)
#define mod          1000000007
#define fi           first
#define se           second
#define pa           pair <ll,ll>
#define mp           make_pair
#define pb           push_back
#define ve           vector<ll>
#define vep          vector< pa >
#define all(a)       a.begin(), a.end()
#define sz(x)        (ll)x.size()
#define c(t)         cout<<t<<"\n"
using namespace std;
vector< ll > v[100001];
bool vis[100001];
static ll cou=1;
void dfs(ll s)
{
    vis[s]=1;
    f(i,0,v[s].size())
    {  if(!vis[v[s][i]])
        {dfs(v[s][i]);
         cou++;
        }
    }
}
void solve()
{
ll n,e;
cin>>n>>e;

f(i,0,e)
{
    ll u,f;
    cin>>u>>f;
    v[u].push_back(f);
    v[f].push_back(u);
}
ll x,ans;
cin>>x;
f(i,1,n+1)
{
    if(!vis[i])
    {  bool pr=vis[x];
        dfs(i);
      bool no=vis[x];
      if(pr==0&&no==1)
        ans=cou;
        cou=1;
    }
}
c(n-ans);
}
int main()
{
    ios::sync_with_stdio(true);
   //freopen ("input.txt","r",stdin);
   //freopen ("output.txt","w",stdout);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {   memset(vis,0,sizeof(vis));
        solve();
    }
return 0;
}
