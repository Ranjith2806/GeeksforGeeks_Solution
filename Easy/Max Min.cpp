class Solution
{
   public:
    int findSum(int A[], int N)
    {
    	int maxi=0,mini=0,sum;
    	for(int i=0;i<N;i++)
    	{
    	    maxi=max(A[i],maxi);
    	    mini=min(A[i],mini);
    	    sum = mini+maxi;
    	}
    	return sum;
    }

};
