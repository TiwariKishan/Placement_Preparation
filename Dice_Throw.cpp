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
ll m,n,x;
cin>>m>>n>>x;
ll o=max(n*m,x);
ll dp[n][o+1];
memset(dp,0,sizeof(dp));
f(i,1,m+1)
dp[0][i]=1;
f(i,1,n)
f(j,i+1,(i+1)*m+1)
f(k,1,m+1)
if((j-k)>=1)
dp[i][j]+=dp[i-1][j-k];
c(dp[n-1][x]);
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
