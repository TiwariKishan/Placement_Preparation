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
/*ll n;
cin>>n;
ll a[n];
f(i,0,n)
cin>>a[i];
*/
ll n,q,m=0,x=0;
cin>>n>>q;
ll *a=new ll[n+1]();
f(i,0,q)
{   ll r,b,k;
    cin>>r>>b>>k;
    a[r]+=k;
    if(b+1<=n)
    a[++b]-=k;
}
f(i,1,n+1)
{x+=a[i];
 if(m<x)
    m=x;
}
c(m);
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
