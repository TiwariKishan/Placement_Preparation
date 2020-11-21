class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int dp[366]={0};
        unordered_set<int> s={days.begin(),days.end()};
        for(int i=1;i<=365;i++)
        {
            if(s.find(i)==s.end()) dp[i]=dp[i-1];
            else
            {
                dp[i]=min(dp[i-1]+costs[0],min(dp[max(0,i-7)]+costs[1],dp[max(0,i-30)]+costs[2]));  //dp[i]till ith day i have coupan or more
            }
        }
        return dp[365];
    }
};
