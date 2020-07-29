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
ll max_water(ll a[],ll n)
{
    ll prev=0,water=0,temp=0;
    f(i,1,n)
    {
        if(a[prev]<=a[i])
        {
            prev=i;
            temp=0;
        }
        else
        {
            water+=a[prev]-a[i];
            temp+=a[prev]-a[i];
        }
    }
    if(prev!=n-1)
    {
        water-=temp;
        ll o=prev;
        prev=n-1;
        for(ll i=n-1;i>=o;i--)
        {
            if(a[prev]<=a[i])
                prev=i;
            else
            water+=a[prev]-a[i];
        }
    }
    return water;

}
void solve()
{
ll n;
cin>>n;
ll a[n];
f(i,0,n)
cin>>a[i];
c(max_water(a,n));
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
