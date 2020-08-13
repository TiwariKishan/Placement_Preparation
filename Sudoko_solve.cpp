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
bool is_all_assigned(ll a[][9],ll &row,ll &col)
{
    for(row=0;row<9;row++)
    for(col=0;col<9;col++)
    if(a[row][col]==0)
        return false;
    return true;
}
bool UsedInBox(ll grid[][9], ll boxStartRow,
               ll boxStartCol, ll num)
{
    for (ll row = 0; row < 3; row++)
        for (ll col = 0; col < 3; col++)
            if (grid[row + boxStartRow]
                    [col + boxStartCol]
                == num)
                return true;
    return false;
}
bool is_safe(ll a[][9],ll row, ll col,ll k)
{
    f(i,0,9)
    if(a[i][col]==k||a[row][i]==k)
        return false;
    if(UsedInBox(a,row-row%3,col-col%3,k))
        return false;
    if(a[row][col]!=0)
        return false;
    return true;
}

bool fun(ll a[][9])
{
    ll row,col;
    if(is_all_assigned(a,row,col))
        return true;
    f(i,1,10)
    {
        if(is_safe(a,row,col,i))
            {a[row][col]=i;
                if(fun(a))
                    return true;
            }
        a[row][col]=0;
    }
    return false;
}
void solve()
{
ll a[9][9];
f(i,0,9)
f(j,0,9)
cin>>a[i][j];
fun(a);
f(i,0,9)
f(j,0,9)
cout<<a[i][j]<<" ";
}
int main()
{
    ios::sync_with_stdio(true);
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif*/
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
