int pr(int a[],int l,int r,int n)
{
    int mid=l+(l-r)/2;
    if((mid==0||a[mid-1]<a[mid])&&(mid==n-1||a[mid]>a[mid+1]))
    return mid;
    else if(mid!=0&&a[mid-1]>a[mid])
    return pr(a,l,mid-1,n);
    else
    return pr(a,mid+1,r,n);
}
int peakElement(int arr[], int n)
{
   // Your code here
   return pr(arr,0,n-1,n);
}
