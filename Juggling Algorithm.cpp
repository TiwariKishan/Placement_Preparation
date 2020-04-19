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
/*Time complexity : O(n)
Auxiliary Space : O(1)*/
ll gcd(ll a,ll b)
{
    if(b==0)
        return a;
   return gcd(b,a%b);
}
void solve()
{  ll n,d;
cin>>n>>d;
ll a[n];
f(i,0,n)
cin>>a[i];
ll l=gcd(n,d);
f(i,0,l)
{
    ll temp=a[i];
    ll j=i;
    while(1)
    {ll k=j+d;
      if(k>=n)
        k-=n;
      if(k==i)
        break;
      a[j]=a[k];
      j=k;
    }
 a[j]=temp;
}
f(i,0,n)
cout<<a[i]<<" ";
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
