class Solution {
public:
    int bs(vector<int>& arr, int k)
    {
        int l=0,r=arr.size()-1,m;
        while(l<r)
        {
            m=l+(r-l)/2;
            if(abs(arr[m]-k)>abs(arr[m+1]-k))
                l=m+1;
            else r=m;
        }
        return r;
    }
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int s=bs(arr,x);
        vector <int> ans;
        ans.push_back(arr[s]);
        k--;
        int l=s-1,r=s+1;
        while(k--)
        {
            if(l<0)                 ans.push_back(arr[r++]);
            else if(r>=arr.size())  ans.push_back(arr[l--]);
            else if(abs(arr[l]-x)<=abs(arr[r]-x))   ans.push_back(arr[l--]);
            else
                ans.push_back(arr[r++]);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
