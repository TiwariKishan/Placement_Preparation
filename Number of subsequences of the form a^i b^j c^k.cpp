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
ll cou(string s)
{
    ll a=0,b=0,c=0;
    f(i,0,s.size())
    {
        if(s[i]=='a')
            a=1+2*a;
        if(s[i]=='b')
            b=a+2*b;
        if(s[i]=='c')
            c=b+2*c;
    }
    return c;
}
void solve()
{  string s;
cin>>s;
cout<<cou(s)<<"\n";
}
int main()
{
    ios::sync_with_stdio(true);
   //freopen ("input.txt","r",stdin);
   //freopen ("output.txt","w",stdout);
    cin.tie(0);
    cout.tie(0);
    ll t=1;
    //cin>>t;
    while(t--)
    {

        solve();
    }
return 0;
}
