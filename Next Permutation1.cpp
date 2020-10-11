class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        for(int i=nums.size()-1;i>0;i--)
        {
            if(nums[i]>nums[i-1])
            {
                int j=i,mi=nums[i];
                for(int k=i+1;k<nums.size();k++)
                {
                    if(mi>nums[k]&&nums[i-1]<nums[k])
                    {
                        mi=nums[k];
                        j=k;
                    }
                }
                swap(nums[i-1],nums[j]);
                sort(nums.begin()+i,nums.end());
                return;
            }
        }
        sort(nums.begin(),nums.end());
        return;
    }
};
