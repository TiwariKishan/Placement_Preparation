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
ll dp[101][101];
string d="";
ll tda(string &a,string &b,ll ae,ll be)
{
    if(ae<0||be<0)
        return 0;
        if(dp[ae][be]!=-1)
            return dp[ae][be];
    if(a[ae]==b[be])
       {d+=a[ae];
        return dp[ae][be]=1+tda(a,b,ae-1,be-1);
       }
       else
        return dp[ae][be]=max(tda(a,b,ae-1,be),tda(a,b,ae,be-1));
}
void solve()
{
ll n,m;
cin>>n>>m;
string a,b;
cin>>a>>b;
c(tda(a,b,n-1,m-1));
reverse(d.begin(),d.end());
c(d);
d="";
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
    {   memset(dp,-1,sizeof(dp));
        solve();
    }
return 0;
}
