#include <bits/stdc++.h>
using namespace std;
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    if(n==1)
	    cout<<"1\n";
	    else
	    {int y=0;
	        for(int j=2;j<=sqrt(n);j++)
	        {
	            float p=log2(n)/log2(j);
	            if(floor(p)==ceil(p)&&p>1)
	            {
	                cout<<"1\n";
	                y=2;
	                break;
	            }
	        }
	        if(y==0)
	        cout<<"0\n";
	    }
	    
	}
	return 0;
}
