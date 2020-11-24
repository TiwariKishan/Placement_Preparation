class Solution {
public:
    int maxProduct(vector<int>& a) {
        int ans=a[0],mi=a[0],ma=a[0];
        for(int i=1;i<a.size();i++)
        {
            int temp=ma;
            ma=max(temp*a[i],max(mi*a[i],a[i]));
            mi=min(temp*a[i],min(mi*a[i],a[i]));
            ans=max(ans,ma);
        }
        return ans;
    }
};
