class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
int n=nums.size();
vector<int> v(n,1);
int temp=1;
       for(int i=0;i<n;i++)
       {
           v[i]=temp;
           temp*=nums[i];
       }
int temp1=1;
        for(int i=n-1;i>=0;i--)
        {
            v[i]*=temp1;
            temp1*=nums[i];
        }
        return v;
    }
};
