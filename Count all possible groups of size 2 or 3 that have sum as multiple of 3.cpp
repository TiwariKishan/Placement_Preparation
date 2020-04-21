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
{  ll n;
cin>>n;
 ll a[n],x=0,y=0,z=0;
 f(i,0,n)
 {
     cin>>a[i];
     a[i]=a[i]%3;
     if(a[i]==0)
        x++;
     else if(a[i]==1)
        y++;
     else
        z++;
 }
 ll ans=(x*(x-1)>>1)+((x*(x-1)*(x-2))/6)+((y*(y-1)*(y-2))/6)+((z*(z-1)*(z-2))/6)+y*z*(1+x);
 c(ans);
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
