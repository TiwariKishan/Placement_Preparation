class Solution {
public:
    int parent(int i)
{   if(i%2==0)
     i--;
    return i/2;
}
    
int left(int i)
{return 2*i+1;}
    
int right(int i)
{return 2*i+2;}
    
void max_heapify(vector<int> &a,int n,int i)
{
    int it=i,l=left(i),r=right(i);
    if(l<n&&a[l]>a[i])
        i=l;
    if(r<n&&a[r]>a[i])
        i=r;
    if(i!=it)
        {swap(a[i],a[it]);
         max_heapify(a,n,i);}
}
    
void Build_max_heap(vector<int> &a,int n)
{
    for(int i=n/2;i>=0;i--)
        max_heapify(a,n,i);
}
    
    int lastStoneWeight(vector<int>& stones) {
        int n=stones.size();
        if(n==0) return 0;
        if(n==1) return stones[0];
        Build_max_heap(stones,n);

        swap(stones[0],stones[n-1]);
        max_heapify(stones,n-1,0);
        int x=stones[n-1];
        
        swap(stones[0],stones[n-2]);
        int y=stones[n-2];
        vector<int> ::iterator p=stones.end();
            p--;
            p--;
            stones.erase(p,stones.end());
        if(x!=y)
        {
            stones.push_back(x-y);
        }
        return lastStoneWeight(stones);
    }
};
