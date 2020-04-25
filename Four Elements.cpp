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
ll x,an=0;
cin>>x;
sort(a,a+n);
f(i,0,n-3)
{
    f(j,i+1,n-2)
    {
        ll l=j+1,r=n-1;
        while(l<r)
        {
            if(a[i]+a[j]+a[l]+a[r]==x)
            {
                an++;
                l++;
                r--;
            }
           else if(a[i]+a[j]+a[l]+a[r]<x)
            l++;
           else
            r--;
        }
    }
}
if(an>0)
    an=1;
c(an);
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
