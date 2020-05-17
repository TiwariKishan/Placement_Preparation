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
ll n,m,j;
cin>>n>>m;
ll a[n][m];
f(i,0,n)
f(j,0,m)
cin>>a[i][j];
ll ma=m;
f(i,0,n)
{
    if(ma!=m)
    {
        if(a[i][ma]!=1)
            continue;
        else
        {
            ll l=0,r=m-1,mid;
            while(l<r)
            {   mid=l+(r-l)/2;
                if(a[i][mid]==0)
                    l=mid+1;
                else
                    r=mid;
            }
            if(ma>r)
            {
                ma=r;
                j=i;
            }
        }
    }
    else
    {
        ll l=0,r=m-1,mid;
            while(l<r)
            {   mid=l+(r-l)/2;
                if(a[i][mid]==0)
                    l=mid+1;
                else
                    r=mid;
            }
            if(ma>r)
            {
                ma=r;
                j=i;
                //c(j);
            }
    }
}
c(j);
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
