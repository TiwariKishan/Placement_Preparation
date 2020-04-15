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
void pp(string s,ll i,ll j,char bu[])
{
    if(i==s.size())
    {
        bu[j]='\0';
        cout<<"("<<bu<<")";
        return;
    }
    bu[j]=' ';
    bu[j+1]=s[i];
    pp(s,i+1,j+2,bu);
    bu[j]=s[i];
    pp(s,i+1,j+1,bu);
}
void solve()
{  string s;
   cin>>s;
ll n=s.size();
char bu[2*n];
bu[0]=s[0];
pp(s,1,1,bu);
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
        cout<<"\n";
    }
return 0;
}
