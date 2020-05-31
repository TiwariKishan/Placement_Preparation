int minimumSwaps(vector<int> arr) {
int count=0;
for(int i=0;i<arr.size();i++)
{
    while(arr[i]!=i+1)
    {
       int temp=arr[arr[i]-1];
        arr[arr[i]-1]=arr[i];
        arr[i]=temp;
        count++;

    }
}
return count;
}
