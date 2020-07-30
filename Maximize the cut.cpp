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
ve dp(4003,-2);
ll tpd(ll a[],ll n)
{
    if(n<0)
        return -1;
    if(n==0)
        return 0;
    ll m=-1;
    if(dp[n]!=-2)
        return dp[n];
    f(i,0,3)
    {m=max(m,tpd(a,n-a[i]));
     //c(m);
    }
    if(m!=-1)
    return dp[n]=1+m;
    else dp[n]=m;

}
void solve()
{
ll n;
cin>>n;
ll a[n];
f(i,0,3)
cin>>a[i];
c(tpd(a,n));
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
    {   dp.clear();
        dp.resize(4003,-2);
        solve();
    }
return 0;
}
