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
int parent(int i)
{   if(i%2==0)
     i--;
    return i/2;
}
int left(int i)
{return 2*i+1;}
int right(int i)
{return 2*i+2;}
void max_heapify(ll a[],ll n,ll i)
{
    int it=i,l=left(i),r=right(i);
    if(l<n&&a[l]>a[i])
        i=l;
    if(r<n&&a[r]>a[i])
        i=r;
    if(i!=it)
        {swap(a[i],a[it]);
         max_heapify(a,n,i);}
}
void Build_max_heap(ll a[],ll n)
{
    for(int i=n/2;i>=0;i--)
        max_heapify(a,n,i);
}
void heap_sort(ll a[],ll n)
{
    Build_max_heap(a,n);
    for(int i=n-1;i>=1;i--)
    {
        swap(a[0],a[i]);
        max_heapify(a,i,0);
    }
}
void solve()
{
    ll n;
cin>>n;
ll a[n];
f(i,0,n)
cin>>a[i];
heap_sort(a,n);
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
