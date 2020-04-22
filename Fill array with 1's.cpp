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
ll n;
cin>>n;
ll a[n];
f(i,0,n)
cin>>a[i];
ll l=-1,r=-1;
f(i,0,n)
if(a[i]==1)
{
    l=i;
    break;
}
for(ll i=n-1;i>=0;i--)
    if(a[i]==1)
{
    r=i;
    break;
}
if(l==-1)
    c(-1);
else{
        ll ze=0,am=-1;
f(i,l+1,r+1)
{
    if(a[i]==1&&ze!=0)
        {
         am=max(am,ze);
         ze=0;
        }
    if(a[i]==0)
    {
        ze++;

    }
}
ll ans=max((am+1)/2,max(l,n-r-1));
c(ans);
}
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
