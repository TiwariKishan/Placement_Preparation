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
string r="";
void re(string s,ll n,ll i)
{
    if(n==0)
       {   r+=s.substr(i,s.size()-i);
           return;
       }
    if(n>=s.size()-i)
        return;
    ll mi=i;
    ll o=0,j=i+1;
    while(o<=n-1)
    {if(s[mi]>s[j])
        mi=j;
    o++;
    j++;
    }
    r+=s[mi];
    re(s,n-(mi-i),mi+1);
}
void solve()
{   string s;
    ll n;
    cin>>s;
    cin>>n;
    re(s,n,0);
    cout<<r<<"\n";
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
