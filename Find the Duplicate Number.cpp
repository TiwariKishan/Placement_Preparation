class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        int rab=0,tor=0,flag=0;
        while(rab!=tor||flag==0)
        {
            flag=1;
            rab=nums[nums[rab]];
            tor=nums[tor];
        }
        rab=0;
        while(rab!=tor)
        {
            rab=nums[rab];
            tor=nums[tor];
        }
        return tor;
    }
};
