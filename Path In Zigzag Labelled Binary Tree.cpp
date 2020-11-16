public:
    vector pathInZigZagTree(int label) {
        deque q;
        q.push_back(1);
        vector ans,p(label+2,0);
        p[1]=-1;
        int level=1,var=1;
        while(!q.empty())
        {
            int s=q.size(),l=0;
            while(s--)
            { if(p[label]!=0) 
                {l=1;
                 break;
                }
                if(level%2==1)
              {int curr=q.back();
                q.pop_back();
                p[var+1]=curr;
                p[var+2]=curr;
                q.push_front(++var);
                q.push_front(++var);
              }
             else
             {
                 int curr=q.front();
                 q.pop_front();
                 p[var+1]=curr;
                 p[var+2]=curr;
                 q.push_back(++var);
                 q.push_back(++var);
             }
            
            }
            if(l==1) break;
            
            level++;
        }
        while(label!=-1)
        {
            ans.push_back(label);
            label=p[label];
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
