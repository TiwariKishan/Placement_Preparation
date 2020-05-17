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
int maxElement(int arr[],int n,int k)
  {
   for(int i=0;i<n;++i)
   {
    arr[(arr[i]%k)]+=k;
   }
   int max=arr[0];
   int index=0;
   for(int i=0;i<n;++i)
   arr[i]-=arr[i]%k;
   for(int i=1;i<n;++i)
   {
    if(max<arr[i])
    {
     max=arr[i];
     index=i;
    }
   }
   return index;
  }
void solve()
{
int n,k;
cin>>n>>k;
int a[n];
f(i,0,n)
cin>>a[i];
c(maxElement(a,n,k));
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
