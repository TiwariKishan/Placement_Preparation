int maxLen(int A[], int n) {
    // Your code here
    int maxle=0,sum=0;
    map<int,int> prm;
    for(int i=0;i<n;i++)
    {   sum+=A[i];
        if(A[i]==0&&maxle==0)
        maxle=1;
        if(sum==0)
        maxle=i+1;
        if(prm.find(sum)!=prm.end())
        maxle=max(maxle,i-prm[sum]);
        else
        prm[sum]=i;
   
    }
 
    return maxle;
}
