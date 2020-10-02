class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int> > ans;
        if(nums.size()<3) return ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++)
        {
            int a=nums[i];
            if(a>0) break;
            if(i>0&&nums[i-1]==a) continue;
            int j=i+1,k=nums.size()-1;
            while(j<k)
            {int b=nums[j],c=nums[k];
                if(a+b+c==0)
                {
                    ans.push_back(vector<int> {a,b,c});
                    j++;
                    k--;
                    while(j<k&&b==nums[j]&&c==nums[k])
                    {
                        j++;
                        k--;
                    }
                }
             else if(a+b+c>0)
                 k--;
             else
                 j++;
            }
            
        }
        return ans;
    }
};
