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
ll ms(ll arr[],ll l ,ll r,ll m)
{
  ll a[m-l+1],b[r-m],in=0;
     for(ll i=0;i<m-l+1;i++)
     a[i]=arr[l+i];
     for(ll i=0;i<r-m;i++)
     b[i]=arr[m+i+1];
     ll i=0,j=0,k=l;
     while(i<m-l+1&&j<r-m)
     {

         if(a[i]<=b[j])
         {
             arr[k]=a[i];
             i++;
         }
         else
         {
             arr[k]=b[j];
             in+=m-i+1-l;
             j++;
         }
         k++;
     }
     while(j<r-m)
     {
         arr[k]=b[j];

         j++;
         k++;
     }
     while(i<m-l+1)
     {
             arr[k]=a[i];
             i++;
             k++;
     }
     return in;
}
ll merge(ll a[],ll l,ll r)
{
    ll in=0;
    if(l<r)
 {ll mid=l+(r-l)/2;
 in+=merge(a,l,mid);
 in+=merge(a,mid+1,r);
 in+=ms(a,l,r,mid);
 }
 return in;
}

void solve()
{
ll n;
cin>>n;
ll a[n];
f(i,0,n)
cin>>a[i];
c(merge(a,0,n-1));
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
