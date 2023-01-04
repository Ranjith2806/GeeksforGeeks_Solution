class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        int i=0,sum=0,ans=0;
        for( i=0 ; i<n-1 ; i++)
        {
            sum=sum+array[i];
        }
        
        ans=(n*(n+1))/2-sum;
        
        return ans;
    }
};
