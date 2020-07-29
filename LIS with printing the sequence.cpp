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
vector<ll> bup(ll a[],ll n)
{
    vector<vector<ll> >dp(n);
    dp[0].push_back(a[0]);
    f(i,1,n)
    {
        f(j,0,i)
        {
            if(a[j]<a[i]&&dp[j].size()+1>dp[i].size())
                dp[i]=dp[j];
        }
        dp[i].push_back(a[i]);
    }
    vector<ll> maxt=dp[0];
    f(i,0,n)
        if(maxt.size()<dp[i].size())
        maxt=dp[i];
return maxt;
}
void solve()
{
ll n;
cin>>n;
ll a[n];
f(i,0,n)
cin>>a[i];
vector<ll> ans=(bup(a,n));
f(i,0,ans.size())
cout<<ans[i]<<" ";
cout<<"\n";
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
    {
        solve();
    }
return 0;
}
