class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        if(n<=1) return (n==0) ? vector<int>{} : vector<int>{0};
        vector<vector<int> > g(n);
        vector<int> degree(n,0);
        for(int i=0;i<edges.size();i++)
        {
            g[edges[i][0]].push_back(edges[i][1]);
            g[edges[i][1]].push_back(edges[i][0]);
            degree[edges[i][1]]++;
            degree[edges[i][0]]++;
        }
        queue<int> q;
        vector<bool> vis(n,false);
        for(int i=0;i<n;i++)
        {
            if(degree[i]==1)
            {q.push(i);
             vis[i]=true;
            }
        }
        int leaves=q.size();
        vector<int> res;
        while(!q.empty())
        {
            int curr=q.front();
            res.push_back(curr);
            q.pop();
            --leaves;
            for(int i=0;i<g[curr].size();i++)
            {
                if(vis[g[curr][i]]==false)
                {
                    --degree[g[curr][i]];
                    if(degree[g[curr][i]]==1)
                    {
                        vis[g[curr][i]]=true;
                        q.push(g[curr][i]);
                    }
                }
            }
            if(leaves==0)
            {
                if(!q.empty()) 
                    res.clear();
                leaves=q.size();
            }
        }
        return res;
        
    }
};
