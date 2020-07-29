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
void solve()
{
ll n,w;
cin>>n>>w;
ll wt[n],va[n];
f(i,0,n)
cin>>va[i];
f(i,0,n)
cin>>wt[i];
ll ma=5e4;
vector<ll> dp(ma+1,INT_MAX);
dp[0]=0;
f(i,0,n)
{
    for(ll v=ma;v>=0;v--)
    {
        dp[v]=min(dp[v],(v>=va[i]) ? dp[v-va[i]]+wt[i]:INT_MAX);
    }
}
ll ans=0;
f(i,0,ma+1)
if(dp[i]<=w)
ans=i;
cout<<ans;
}
int main()
{
    ios::sync_with_stdio(true);
   //freopen ("input.txt","r",stdin);
   //freopen ("output.txt","w",stdout);
    cin.tie(0);
    cout.tie(0);
    ll t=1;
    //cin>>t;
    while(t--)
    {
        solve();
    }
return 0;
}
