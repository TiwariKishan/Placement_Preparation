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
bool fe(ll a[],ll mid,ll s);
void solve()
{
ll n,x;
cin>>n>>x;
ll a[n];
f(i,0,n)
cin>>a[i];
ll l=0,r=n-1,mid;
while(l<r)
{
    mid=l+(r-l)/2;
	if(fe(a,mid,x)==true)
	r=mid;
	else
	l=mid+1;
}
if(a[r]!=x)
    {r=-1;
     cout<"-1\n";
     return ;
    }
ll l1=0,r1=n-1,mid1;
while(l1<r1)
{
    mid1=l1+(r1-l1)/2;
	if(fe(a,mid1,x+1)==true)
	r1=mid1;
	else
	l1=mid1+1;
}
if(a[r1!=x])
r1--;
cout<<r<<" "<<r1<<"\n";
}
bool fe(ll a[],ll mid,ll s)
{
	if(a[mid]>=s)
	return 1;
	else
	return 0;
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
