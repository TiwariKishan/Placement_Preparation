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
ll n,k;
cin>>n>>k;
ll a[n];
f(i,0,n)
cin>>a[i];
map<ll,ll> m;
ve top(k+1,0);
f(i,0,n)
{
    m[a[i]]++;
    top[k]=a[i];
    auto it=find(top.begin(),top.end()-1,a[i]);
    for(ll j=distance(top.begin(), it)-1;j>=0;j--)
    {  // c(j);
        if(m[top[j]]<m[top[j+1]])
        swap(top[j],top[j+1]);
        else if(m[top[j]]==m[top[j+1]]&&top[j]>top[j+1])
        swap(top[j],top[j+1]);
        else
        break;
         
    }
    for(ll j=0;j<k&&top[j]!=0;j++)
    cout<<top[j]<<" ";
    
}
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
