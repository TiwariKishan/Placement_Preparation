int peak(int nums[],int n)
{ //int n=nums.size();
        int l=0,r=n-1,m;
        while(l<r)
        {
            m=l+(r-l)/2;
            if(nums[m]<nums[m+1])
                l=m+1;
            else
                r=m;
        }
        return r;
    }
int peakElement(int arr[], int n)
{
   // Your code here
   return peak(arr,n);
}
