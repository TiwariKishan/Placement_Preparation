class Solution {
public:
    vector<int> partitionLabels(string S) {
        int last[26];
        for(int i=0;i<S.size();i++)
            last[S[i]-'a']=i;
        int j=0,anchor=0;
        vector<int> ans;
        for(int i=0;i<S.size();i++)
        {
            j=max(j,last[S[i]-'a']);
            if(j==i)
            {
                ans.push_back(j-anchor+1);
                anchor=i+1;
            }
        }
        return ans;
    }
};
