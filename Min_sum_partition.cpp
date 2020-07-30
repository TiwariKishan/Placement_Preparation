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
ll bdp(ll a[],ll n,ll s)
{  ll sum=s;
   bool b[n+1][sum+1];
   f(i,0,n+1)
   b[i][0]=1;
   f(i,1,sum+1)
   b[0][i]=0;
   f(i,1,n+1)
   {
       f(j,1,sum+1)
       {
           b[i][j]=(j<a[i-1]) ? b[i-1][j]: b[i-1][j]||b[i-1][j-a[i-1]];
       }
   }
   ll mi=mod;
   f(i,0,sum/2+1)
   {
       if(b[n][i])
        mi=min(mi,abs((sum-i)-i));
   }
   return mi;
}
void solve()
{  ll n,s=0;
cin>>n;
ll a[n];
f(i,0,n)
{cin>>a[i];
s+=a[i];
}
c(bdp(a,n,s));
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
