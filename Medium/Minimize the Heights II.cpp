class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        sort(arr,arr+n);
        int maxi=arr[n-1];
        int mini=arr[0];
        int diff=maxi-mini;
        for(int i=0;i<n;i++)
        {
            if(arr[i]-k<0)
            {
                continue;
            }
            maxi=max(arr[i-1]+k,arr[n-1]-k);
            mini=min(arr[0]+k,arr[i]-k);
            diff=min(diff,maxi-mini);
        }
        return diff;
        
    }
};
