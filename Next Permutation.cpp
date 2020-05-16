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
ll n,f=0;
cin>>n;
ll a[n];
f(i,0,n)
cin>>a[i];
for(ll i=n-2;i>=0;i--)
{  ll m=101,k;
    for(ll j=i+1;j<n;j++)
    {
        if(a[i]<a[j]&&m>a[j])
        {
            m=a[j];
            k=j;
            f=2;
        }

    }
    if(f==2)
    {
        swap(a[i],a[k]);
        sort(a+i+1,a+n);
        f(o,0,n)
        cout<<a[o]<<" ";
        cout<<"\n";
        return;
    }
}
sort(a,a+n);
f(o,0,n)
        cout<<a[o]<<" ";
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
