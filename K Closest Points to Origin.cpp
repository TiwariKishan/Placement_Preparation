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
void min_heapify( vector<vector<int>> &a,int n,int i)
{
    int it=i,l=left(i),r=right(i);
    int al;
    if(l<n) al=pow(a[l][0],2)+pow(a[l][1],2);
    int ar;
    if(r<n) ar=pow(a[r][0],2)+pow(a[r][1],2);
    int ai=pow(a[i][0],2)+pow(a[i][1],2);
    if(l<n&&al<ai)
        i=l;
    ai=pow(a[i][0],2)+pow(a[i][1],2);
    if(r<n&&ar<ai)
        i=r;
    if(i!=it)
        {swap(a[i],a[it]);
         min_heapify(a,n,i);}
}
void Build_min_heap( vector<vector<int>> &a,int n)
{
    for(int i=n/2;i>=0;i--)
        min_heapify(a,n,i);
}
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        if(points.size()==K) return points;
        Build_min_heap(points,points.size());
        vector<vector<int>> ans;
       for(int i=points.size()-1;i>points.size()-1-K;i--)
       {
           swap(points[0],points[i]);
           ans.push_back(points[i]);
           min_heapify(points,i,0);
       }
        return ans;
    }
};
