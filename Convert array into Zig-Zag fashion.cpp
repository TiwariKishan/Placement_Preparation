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
//In O(N)
//application of Bubble_sort
void solve()
{
ll n;
cin>>n;
ll a[n];
f(i,0,n)
cin>>a[i];
int f=0;
f(i,0,n-1)
{
    if(a[i]>a[i+1]&&f==0)
    {
        swap(a[i],a[i+1]);

    }
    else if(a[i]<a[i+1]&&f==1)
    {
        swap(a[i],a[i+1]);

    }
    f=!f;
    //cout<<a[i]<<" ";
}
f(i,0,n)
cout<<a[i]<<" ";
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
