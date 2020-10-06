class Solution {
public:
    int search(vector<int>& nums, int target) {
        int lo=0,hi=nums.size()-1,mid;
        while(lo<hi)
        {
            mid=lo+(hi-lo)/2;
            if(nums[mid]>nums[hi])  lo=mid+1;
            else    hi=mid;
        }
        int l,r,m;
        if(nums[nums.size()-1]<target&&hi!=0)
        {
            l=0,r=hi-1;
        }
        else
            l=hi,r=nums.size()-1;
        while(l<r)
        {
            m=l+(r-l)/2;
            if(nums[m]<target) l=m+1;
            else r=m;
        }
        if(nums[r]==target) return r;
        else return -1;
    }
};
