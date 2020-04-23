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
ll n,e;
cin>>n>>e;
vector<ll>v[n+1],v1[n+1];
f(i,0,e)
{   ll a,b;
    cin>>a>>b;
    v[a].pb(b);
}
f(i,0,e)
{   ll a,b;
    cin>>a>>b;
    v1[a].pb(b);
}
f(i,1,n+1)
{reverse(v1[i].begin(),v1[i].end());
 if(v1[i].size()!=v[i].size())
 {
     c(0);
     return;
 }
 f(j,0,v1[i].size())
 {   //cout<<v1[i][j]<<" "<<v[i][j]<<"\n";
     if(v1[i][j]!=v[i][j])
     {
         c(0);
         return;
     }
 }
}
c(1);

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
