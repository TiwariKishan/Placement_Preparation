class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
       int l=0,r=arr.size()-k,m;
       while(l<r)
       {
           m=(l+r)/2;
           if(x-arr[m]<=arr[m+k]-x)
               r=m;
           else
               l=m+1;
       }
        return {arr.begin()+l,arr.begin()+l+k};
    }
};
