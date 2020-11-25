class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size()+1,m=amount+1;
        int dp[2][m],flag=0;
        for(int i=0;i<2;i++) dp[i][0]=0;
        for(int i=1;i<m;i++) dp[0][i]=-1;
        for(int i=1;i<n;i++)
        {  flag=!flag;
            for(int j=1;j<m;j++)
            {   dp[flag][j]=dp[!flag][j];
                if(j>=coins[i-1])
                {
                    if(dp[!flag][j]!=-1&&dp[flag][j-coins[i-1]]!=-1)
                    dp[flag][j]=min(dp[!flag][j],1+dp[flag][j-coins[i-1]]);
                    else if(dp[!flag][j]==-1&&dp[flag][j-coins[i-1]]!=-1)
                    dp[flag][j]=1+dp[flag][j-coins[i-1]];
                }
        
            }
        }
        return dp[flag][m-1];
    }
};
