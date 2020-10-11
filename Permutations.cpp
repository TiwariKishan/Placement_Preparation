class Solution {
public:
    void generate_permutation(vector<int>& nums, int begin, vector<vector<int>> &ans)
    {
        if(begin==nums.size())
        {ans.push_back(nums);
            return;}
        for(int i=begin;i<nums.size();i++)
        {
            swap(nums[begin],nums[i]);
            generate_permutation(nums,begin+1,ans);
            swap(nums[begin],nums[i]);
        }
        
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int> > ans;
        if(nums.size()==0) return ans;
        generate_permutation(nums,0,ans);
        return ans;
    }
};
